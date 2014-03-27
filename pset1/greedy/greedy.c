#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // get amount in dollars
    printf("How much change is due?: ");
   
    float amountFloat;
    amountFloat = GetFloat();
    
    int amount, coins;
    coins = 0;
    amount = amountFloat*100;
    
   
    // Test to make sure user input is > 0
        
    if (amountFloat < 0) {
        printf("Retry: ");
        amountFloat = GetFloat();
    }
    
    // check variable values
    printf ("------Variables------\n amountFloat = %f\n amount = %i\n\n\n", amountFloat, amount);
    
    // while (quarters can be used)
    while (amount >= 25) {
        // increase count
        coins++;
        // amount decrease by a quarter
        amount = amount - 25;
    }
    // Begin testing values
    printf("--------- Step-by-Step Report ---------\n");
    printf("After quarters, amount = %i\n", amount);
    
    // while (dimes can be used)
    while (amount < 25 && amount >= 10) {
        // increase count
        coins++;
        // amount decrease by a dime
        amount = amount - 10;
    }
    printf("After dimes, amount = %i\n", amount);
    
    // while (nickels can be used)
    while (amount < 10 && amount >= 5) {
        // increase count
        coins++;
        // amount decrease by a nickel
        amount = amount - 5 ;
    }
    printf("After nickels, amount = %i\n", amount);
    
    // while (pennies can be used)
    while (amount < 5 && amount >= 1) {
        // increase count
        coins++;
        // amount decrease by a penny
        amount = amount - 1;
    }
    printf("After pennnies, amount = %i\n", amount);
    
    /*
    // print number of coins used
    printf("\n---- After All is Said and Done ----\n coins = %d\n amount= %d\n", coins, amount);
    printf("amountFloat = %f\n", amountFloat);
    */
    
    printf("%i\n", coins);
    
    return 0;
}


