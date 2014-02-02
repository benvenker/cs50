#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float amount;
    
    // get amount in dollars
    do {
        printf("How much change is due?: ");
    }
    while (amount > 0);
    
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
    while (amount < .10 && amount >= .5) {
        // increase count
        coins++;
        // amount decrease by a nickel
        amount = amount - .5 ;
    }
    
    // while (pennies can be used)
    while (amount < .5 && amount >= .1) {
        // increase count
        coins++;
        // amount decrease by a penny
        amount = amount - .1;
    }
    
    // pirnt number of coins used
    printf("%d\n", coins);
    
    return 0;
}


