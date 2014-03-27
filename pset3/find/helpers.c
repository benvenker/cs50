/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>
#include <stdio.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    
    
    int count = 0; // declare a counting variable
    int middle = count/2;
    
    //  implement a searching algorithm
    if (n >= 0)
    {
        for (int i = 0; values[i] != '\0'; i++)  // find the length of the array
        {
            count ++;  
        }
        printf("count = %i\n", count);
        printf("middle = %i\n", count/2);   
        printf("\n");
        
/*      while length of list > 0*/
        while (count >= 0) 
        {                
            for (int i = 0; i <= values[middle]; i++)
            {
                if (values[i] == value) { return true; }
            }

            for (int i = 0; i > values[middle] && values[i] != '\0'; i++)
            {
                if (values[i] == value) { return true; }
            } 
                    
            count--;    
        }
    }
    return false;   
}
/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // implement an O(n^2) sorting algorithm
    
    // for each element in the list
    for (int i = 0; values[i] != '\0'; i++)
    {  
        // look at element and element directly to the right
        // if out of order
        if (values[i] > values[i + 1])
        {
            // swap elements
            values[i] = values[i + 1];
            values[i + 1] = values[i];
        }
        
       //  printf("if %i > %i, values[] = {%i}", values[i], values[i+1], values[i]);
    }
    return;
    
}
