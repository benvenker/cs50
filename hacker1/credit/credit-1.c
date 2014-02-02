#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{   
   // int ans; // declare variables
    
    // Prompt the user for a credit card number
    printf("Number: ");
    
    long long cardNum;  // declare long long variable
    cardNum = GetLongLong();
    
    char str[16];
    
    sprintf(str, "%lld", cardNum);
    
     //printf("The 16th number is: %c\n", str[15]); // print the answer
    
    // intialize an integer and add character to integer
    char a = '0';
   // int b = 0;
   // int charToInt = -1*(a - (str[7]));
   // int charToInt2 = -1*(a - (str[6]));
   // printf("Your character is int: %i \n", charToInt);
   // printf ("%i * %i = %i \n", charToInt, charToInt2, charToInt*charToInt2);
    
    int sum;
    
    // Multiply every other digit by two
    for (int i = 1; i < (sizeof(str)); i++) {
        int changeToInt = -1*(a - (str[i]));
        
        int product = 2*changeToInt;
        
        sum = sum + product;
        
        printf("%i", product);
        
        i++;
    }
    printf("\n");
}
