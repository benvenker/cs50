#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    printf("Cash, please: ");
    
    float cash, price, changeDue;
    
    cash = GetFloat()*100;
    price = 1000;
    changeDue = (price - cash)/100;
    do
    {
        printf("Please enter a non-negative value.\n")
    }
    while (cash < 0);
    
    for (int coins = 0; changeDue < .01; coins++)
    {
        if (changeDue >= .25) {
            coins++;
        } else if (changeDue < .25 && changeDue >= .10) {
                    coins++;
                    
                } else if(changeDue < .10 && changeDue >= .05) {
                        coins++;
                        
                    } else if(changeDue < .05 && changeDue >= .01) {
                            coins++;
                      }
                    printf("%f is your change, using %i coins.\n", changeDue, coins)    
    }
     return 0;
}
    
    
    // cashInt = (int) round(cash + 0.00);
   //  for (int i = 0; i <
    
   //  printf("%4.2f\n", changeDue, coins);
    


