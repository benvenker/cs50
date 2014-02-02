#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Pick a positive number less than 24: ");
   
    int height, numSpace, numHash;
    
    height = GetInt();
    
    
    while (height > 23 || height < 1) {
        printf("You didn't pick a valid number, please pick again: ");
        height = GetInt();       
    }
    
    // intialize the counter
    for (int i = 1; i <= height; i++)
    {             
        // print spaces while numSpace is less than height
        // check height = 5, expect space = "    " (four spaces) in first line
        for (numSpace = i; numSpace < height; numSpace++)
            printf(" ");
            
        // set numHash = height - 1 and print hashes while numHash <= height
        // check height = 5, expect "##" in first line
        for (numHash = height - i; numHash <= height; numHash++)
            printf("#");
            
        // print new line
        printf("\n");
    }
    
    return 0;
}
