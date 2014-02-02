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
    
    for (int i = 1; i <= height; i++)
    {             
        // print first set of spaces
        for (numSpace = i; numSpace < height; numSpace++)
            printf(" ");
            
        // print first set of hashes
        for (numHash = height - i; numHash <= height; numHash++)
            printf("#");
            printf(" ");
            
        // print second set of spaces
        for (numSpace = i; numSpace > height; numSpace++)
            printf(" ");
            
        // print second set of hashes
        for (numHash = height - i; numHash <= height; numHash++)
            printf("#");
            
        // print new line
        printf("\n");
    }
    
    return 0;
}
