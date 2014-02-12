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
    //  implement a searching algorithm
    if (n >= 0)
    {
        for (int i = 0; values[i] != '\0'; i++)  // find the length of the array
        {
            count ++;
            // printf("count[%i] = %i\n", values[i], count);
        }
        
/*      while length of list > 0*/
        while (count > 0) 
        {           
/*          look at middle of list*/
            int middle = count / 2;
   
/*          if number found, return true*/
            if (middle == value) { return true; }
            
/*          else if number higher, search left*/
            else if (middle > value)
            {
                for (int i = 0; i < middle; i++)
                {
                    if (values[i] == value) { return true; }    // check if it's the needle*/
                }
            }
/*          else if number lower, search right*/
            else if (middle < value)
            {
                for (int i = 0; i > middle; i++)
                {
                    if (values[i] == value) { return true; }    // check if it's the needle*/
                }
            }
        }
/*       return false*/       
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
        
        printf("if %i > %i, values[] = {%i\n}", values[i], values[i+1], values[i]);
    }
    return;
    
}

/**
 * Move column.
 */
 
int moveJColumn(int j, int blankTileColumn)
 {
    int tempJ; 
    
    tempJ = j;
    j = blankTileColumn;
    blankTileColumn = tempJ;
    
    return j;
 }
 
 int moveBlankColumn(int j, int blankTileColumn)
 {
    int tempC; 
    
    tempC = j;
    j = blankTileColumn;
    blankTileColumn = tempC;
    
    return blankTileColumn;
 }
 
