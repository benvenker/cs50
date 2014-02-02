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
    
    char cardArray[15];
    int test = sizeof(cardNum);
    printf("test is: %i", test);
    
    sprintf(cardArray, "%lld", cardNum);
    
    // intialize an integer and add character to integer
    char a = '0';
    
    int sum, changeToInt, product;
    
    // Multiply every other digit by two and sum the digits
    for (int i = 1; i < (sizeof(cardArray)); i++) {
        
        changeToInt = -1*(a - (cardArray[i])); // convert char to an int
        
        product = 2*changeToInt; // multiply the int by two
        
        sum = sum + product; // sum the products of the digits
        
        printf("product %i = %i\n", i, product); // print a 
        
        i++;
    }
    printf("\n");
    printf("%i\n", sum);
}
