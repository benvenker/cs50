#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Pick a positive number less than 24: ");
    int n, numSpace, numHash;
    
    do
    {
        n = GetInt();    
    }
    if (n > 23 || n < 1);
    {
        printf("You didn't pick a valid number, please pick again.\n");
    }   
   
        for (int i = 1; i <= n; i++)
        {             
            // print spaces
            for (numSpace = i; numSpace < n; numSpace++)
                printf(" ");
                
            // print hashes
            for (numHash = n-i; numHash <= n; numHash++)
                printf("#");
                
            // print new line
            printf("\n");
        }
        
        return 0;
    }
