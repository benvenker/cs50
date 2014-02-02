#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{ 
    // prompt user for a valid credit card number
    printf("Number: ");
        
        long long cardNum, cardTest;
        cardNum = GetLongLong();
        cardTest = cardNum; // create a dummy cardNum
        
        int sizeOfArray;
        sizeOfArray = 0;
       
    // check the length of the credit card number 
        while(cardTest != 0) {
            cardTest/=10;
            ++sizeOfArray;
    }
    // printf("Number of digits: %d\n", sizeOfArray);      // check number of digits
    
    // printf("cardNum = %lld\n", cardNum);        // test cardNum was captured
    
    
    // re-prompt the user if number is less than 13 digits
    while (sizeOfArray < 13) {
        printf("You didn't enter a valid number, please enter at least 13 digits: ");
        cardNum = GetLongLong();
    }
    
  ////////////////////// determine the credit card type //////////////////////
    
    // convert the number to a string
    char cardArray[sizeOfArray];                    // create a character array equal to the length of the card number
    int test = sizeof(cardArray);                   // create a test variable
    printf("sizeof(cardArray) is: %i\n", test);     // print the size of cardArray
    
    sprintf(cardArray, "%lld", cardNum);            // convert the integer in cardNum to string cardArray
    printf("cardArray = %s\n", cardArray);          // print the contents of cardArray
    
    // for every other character of the string and 
    printf("every other character: \n");
    
    char a = '0';
    
    int sum, changeToInt, product, everyOther[16];
    
    for (int i = 1; i < (sizeof(cardArray)); i++) { 
        changeToInt = -1*(a - (cardArray[i]));      // convert char to an int    
        product = 2*changeToInt;                    // multiply the int by two
        sum = sum + changeToInt;                    // sum the products of the digits
        for (i =1; i < everyOther[i]; ++i) {
            int odds += everyOther[i];
        }
        printf("%i", product);                      // print a 
        i++;                                        // skip the next element
    }
        
    // add the sum of the products' digits to the sum of the 
    // digits not multiplied by 2
    
        
    // check if that sum % 10 = 0, if so, the card is legit
    
    // if the card is legit, print the card type
    
     printf("\n");
     printf("everyOtherArray = %s\n", everyOtherArray);
}
