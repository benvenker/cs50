#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // get amount in dollars
    printf("Cash, please: ");
    
    float amount, changeDue;
    
    amount = GetFloat()*100;
    changeDue = (price - amount);
    
    int coins;
    
    coins = 0;
    
    // while (quarters can be used)
    while (amount >= 25) {
        // increase count
        coins++;
        // amount decrease by a quarter
        amount = amount - 25;
    }
    
    // while (dimes can be used)
    while (amount < 25 && amount >= 10) {
        // increase count
        coins++;
        // amount decrease by a dime
        amount = amount - 10;
    }
    
    // while (nickels can be used)
    while (changeDue < 10 && changeDue >= 5) {
        // increase count
        coins++;
        // amount decrease by a nickel
        amount = amount -5 ;
    }
    
    // while (pennies can be used)
    while (changeDue < 5 && changeDue >= 1) {
        // increase count
        coins++;
        // amount decrease by a penny
        amount = amount - 1;
    }
    
    // pirnt number of coins used
    printf("%d\n", coins);
    
    return 0;
}


