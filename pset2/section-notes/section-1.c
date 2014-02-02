#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // create an array with ints 1 - 5
    int A[5] = { 1, 2, 3, 4, 5};
    
    // print out each int on a new line
    for  (int i = 0; i < 5; i++) {
        printf("%d\n", A[i]);
    }
    return 0;
}   
