#include <stdio.h>
#include <math.h>
#include <cs50.h>

int GetPositiveInt(void);

int main(void)
{
    int n = GetPositiveInt();
    printf("THanks for the %i!\n", n);
}

int GetPositiveInt(void)
{
    int n;
    do
    {
        printf("Give me a positive integer: ");
        n = GetInt();
    }
    while (n <= 0);
    return n;
}
