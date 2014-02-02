#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Pick a positive number less than 24: ");
   
    int height, numSpace, numHash;
    
    
    height = GetInt();    

    if (height > 23 || height < 1)
    {
        printf("You didn't pick a valid number, please pick again.\n");
    }
    else
    
    for (int i = 1; i <= height; i++)
    {             
        // print spaces
        for (numSpace = i; numSpace < height; numSpace++)
            printf(" ");
            
        // print hashes
        for (numHash = height - i; numHash <= height; numHash++)
            printf("#");
            
        // print new line
        printf("\n");
    }
    
    return 0;
}
