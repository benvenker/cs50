#include <stdio.h>

int main(void)
{
    printf(" n     n-squared\n");
    printf("---   -----------\n");
        
    for (int n = 0; n <= 10; n++)
    {
        // nSquared = n*n
        printf("%2i        %i\n", n, n*n);
    }
    
}
