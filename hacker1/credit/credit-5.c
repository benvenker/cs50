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
    
    int sum, changeToInt, product, sumNotByTwo;
    sum = 0;
    sumNotByTwo = 0;
    
    for (int i = 1; i <= (sizeof(cardArray)); i++) { 
        changeToInt = -1*(a - (cardArray[i]));      // convert char to an int    
        product = 2*changeToInt;                    // multiply the int by two
        
        if (product >= 10) {
           product = product-10 +1;                 // if product is greater than 10, subtract 10, then add one
           sum += product;                          // to handle 2 digit numbers and increase sum by product's value
        } else {                                    
           sum += product;                          // otherwise, just increase sum by product's value
        } 
        
         printf("%i\n", product);                      // print a 
        i++;                                        // skip the next element
    }
    printf("sum = %i\n",sum);                       // print sum
    
    
   // add the sum of the products' digits to the sum of the 
   // digits not multiplied by 2 
   
    for (int i = 0; i < (sizeof(cardArray)); i ++) {
        changeToInt = -1*(a - (cardArray[i]));      // sum the numbers that weren't multiplied by two 
        sumNotByTwo += changeToInt;
        i++;
    }
    
    printf("sumNotByTwo = %i\n", sumNotByTwo);
    
    printf("sumNotByTwo + sum = %i\n", sumNotByTwo + sum);
    
    
///////////// test that the last digit of the sum is 0  ////////////////
    
    if ((sum + sumNotByTwo) % 10 == 0) {
        printf("valid\n");
    } else {
        printf("invalid\n");
    }
 
///////////// - determind credit card type - ///////////
   
    if (cardArray[0] == '3') {
        printf("AMEX\n");
    }
    else if (cardArray[0] == '4') {
        printf("VISA\n");
    }
    else if (cardArray[0] == '5') {
        printf("MASTERCARD\n");
    }
    else printf("INVALID\n");
    
    return 0;
     
}
