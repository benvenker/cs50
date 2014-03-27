#include <stdio.h>

int main(void)
{
    printf("  Triangular Numbers\n");
    printf("-------------------------\n");
        

    for (int n = 5; n <= 50; n+=5)
    {
        for (int i = 0; i < 5; i++)
        {
            int triangularNumber = n*(n + 1)/2;
            printf("%4i ", triangularNumber);
            n+=5;
        }
        printf("\n");
    }


}
