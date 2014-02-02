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
    while (n > 23 || n < 1);
    {
        printf("You didn't pick a valid number, please pick again.\n");
    }
        

        for (int i = 1; i <= n; i++)
        {             
            // print spaces
            for (numSpace = n-i; numSpace < n; numSpace++)
                printf(" ");
                
            // print hashes
            for (numHash = i; numHash <= n; numHash++)
                printf("#");
                
            // print new line
            printf("\n");
        }
        
        return 0;
    }
