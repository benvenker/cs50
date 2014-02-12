#include <cs50.h>
#include <stdio.h>
#include "helpers.h"

int main(argc, int values[], int n)
{
    int count = 0; // declare a counting variable
    // TODO: implement a searching algorithm
    
    if (n >= 0)
    {
        for (int i = 0; i < values[i] && values[i] != '\0'; i++)
        {
            count ++;
            printf("count[%i] = %i\n", i, count);
        }
    
        for (int i = 0; i < count; i++)
        {   
            if (values[i] == value) { return true; }
        }
        return false;
    }
    return false;
    
}
