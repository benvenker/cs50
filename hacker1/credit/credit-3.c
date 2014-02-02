#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <math.h>
    
int main(void)
{  
    
    // Prompt the user for a credit card number
    printf("Number: ");
    
    long long cardNum;  // declare long long variable
    cardNum = GetLongLong();
    
    // get the length of the array
    int cardLength = 0;
    
    while(cardNum != 0) {
        cardNum/=10;
        ++cardLength;
    }
    printf("Number of digits: %i\n", cardLength);

    
    char cardArray[cardLength];
    int test = sizeof(cardNum);
    printf("test is: %i\n", test);
    
    // convert cardNum to a string and create a character array
    sprintf(cardArray, "%lld", cardNum); 
    
    // intialize an integer and add character to integer
    // char a;
    
    int sum, changeToInt, product;
    
    char a = '0';
    sum = 0;
    // Multiply every other digit by two and sum the digits
    for (int i = 1; i < (sizeof(cardArray)); i++) {
        
        changeToInt = -1*(a - (cardArray[i])); // convert char to an int
            printf("changeToInt = %i\n", changeToInt);
        
        product = 2*changeToInt; // multiply the int by two
        
        if (2*cardArray[i] > 10) {
            product = product-10+1;
            
        } else {
            sum += product; // sum the products of the digits
        }
        printf("%i", product); // print a 
        
        i++;
    }
    printf("\n");
    printf("%i\n", sum);
}
