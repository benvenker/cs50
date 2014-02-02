#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
/////////////// - Get Credit Card Number From User - ///////////////
    
    printf("Number: ");                // prompt user for a valid credit card number
        
    long long cardNum, cardTest;
    cardNum = GetLongLong();
    cardTest = cardNum;                // convert long long cardNum to int cardTest
    
    int sizeOfArray;
    sizeOfArray = 0;
        
    while(cardTest != 0) {             // check the length of the credit card number
        cardTest/=10;                  // using the modulo operator aand a while loop
        ++sizeOfArray;
    }
    
    while (sizeOfArray < 13) {         // re-prompt the user if number is less than 13 digits
        printf("You didn't enter a valid number, please enter at least 13 digits: ");
        cardNum = GetLongLong();
    }

/////////////////// - Convert the Integer Array to a String - //////////////////////   

    char cardArray[sizeOfArray];                // create a character array equal to the length of the card number
    sprintf(cardArray, "%lld", cardNum);        // convert the integer in cardNum to string cardArray
    printf("cardArray = %s\n", cardArray);      // print the contents of cardArray
        
/////////////////////// - Pull out every other number - ///////////////////////
    
    printf("cardArray from loop = \n");             // describe the for loop output
    
    for (int i = 1; i < (sizeof(cardArray)); i++) { 
        //changeToInt = -1*(a - (cardArray[i]));      // convert the i-th character to an integer
        printf("%c", cardArray[i]);                  // print the string
        //i++;                                        // increment i inside the loop to skip the next digit in the number
    }
    
    printf("\n");
    
    return 0;
    // Multiply every other digit of the number by 2
    
    
    // Detect the card type
        // switch statement?
        // Amex?
        // MasterCard?
        // Visa?
        
    // Print the card type
        // if amex, print AMEX
        // if mastercard, print MASTERCARD
        // if visa, print VISA
}
