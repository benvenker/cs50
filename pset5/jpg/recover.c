/**
 * recover.c
 *
 * Computer Science 50
 * Problem Set 5
 *
 * Recovers JPEGs from a forensic image.
 */
 
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

typedef uint8_t BYTE;

// check if the file is a jpeg

bool jpgTest(BYTE buffer[])
{
    if ( (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && buffer[3] == 0xe0) ||
         (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && buffer[2] == 0xe1) )
    {
        return true;
    }
    return false;
}

// dynamically create jpeg names
FILE *new_file(int n)
{
    char jpgName[70];
    sprintf(jpgName, "%03d.jpg", n);
    FILE *out = fopen(jpgName, "w");
    if (out == NULL)
    {
        printf("Could not print file.\n");
        return NULL;
    }
    return out;
}

// main function
int main (int argc, char* argv[])
{
    // open file card.raw to read data
    FILE* card = fopen("card.raw", "r");
    
    if (card == NULL)
    {
        printf("Couldn't open file for writing.");
        return 1;
    }
    
    //int to hold value for sequential filenames
    int jpg = 0;

    //allocate space for buffer to hold 512 byte blocks and next block
    BYTE buffer[512];
    
    //sequence through filenames and open files for writing
    while(fread(buffer, sizeof(BYTE), 512, card) != 0)  // as long as buffer isn't empty
    {
        while (jpgTest(buffer))      // and we found a jpg
        {
            // create outfile
            FILE* outputFile = new_file(jpg);
            
            // write out jpeg to outfile
            fwrite(buffer, sizeof(BYTE), 512, outputFile);
    
            // read next block, check for eof
            if(fread(buffer, sizeof(BYTE), 512, card)  == 0)
            {
                break;  // found eof, exit 
            }
            // while next block isn't the start of new jpeg keep writing
            while(!jpgTest(buffer))    // check if next block is the start of a new jpeg
            {
                fwrite(buffer, sizeof(BYTE), 512, outputFile);  // wasn't jpeg, so write the block
                if(fread(buffer, sizeof(BYTE), 512, card) == 0) // read forward one block and check for eof again
                {
                    break; // found eof, exit
                }
            }
            
            // close outfile
            fclose(outputFile);
            jpg++;  
        }              
    }     
    // close file pointer
    fclose(card);
 
}
