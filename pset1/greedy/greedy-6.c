#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // get amount in dollars
    printf("How much change is due?: ");
   
    float amount;
    
    amount = GetFloat();
    // changeDue = (price - amount);
    
    int coins;
    
    coins = 0;
    
    // while (quarters can be used)
    while (amount >= .25) {
        // increase count
        coins++;
        // amount decrease by a quarter
        amount = amount - .25;
    }
    
    // while (dimes can be used)
    while (amount < .25 && amount >= .10) {
        // increase count
        coins++;
        // amount decrease by a dime
        amount = amount - .10;
    }
    
    // while (nickels can be used)
    while (amount < .10 && amount >= .05) {
        // increase count
        coins++;
        // amount decrease by a nickel
        amount = amount - .5 ;
    }
    
    // while (pennies can be used)
    while (amount < .05 && amount >= .01) {
        // increase count
        coins++;
        // amount decrease by a penny
        amount = amount - .01;
    }
    
    // print number of coins used
    printf("%d %f\n", coins, amount);
    
    return 0;
}


