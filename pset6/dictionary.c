/****************************************************************************
 * dictionary.c
 *
 * Computer Science 50
 * Problem Set 6
 *
 * Implements a dictionary's functionality.
 ***************************************************************************/

#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#include "dictionary.h"

typedef struct node
{
    int n;
    struct node *next;
}node;
 
bool check(const char* word)
{ 
    // TODO
    return false;
}

/**
 * Loads dictionary into memory.  Returns true if successful else false.
 */
bool load(const char* dictionary)
{
    FILE* dictionary = fopen("/dictionaries/small.txt", "r");
    
    if (dictionary == NULL)
    {
        printf("Couldn't open dictionary.");
        return true;
    }
    
    
    
    
    return false;
}

/**
 * Returns number of words in dictionary if loaded else 0 if not yet loaded.
 */
unsigned int size(void)
{
    // TODO should be implemented in one line of code INCLUDING RETURN STATEMENT
    return 0;
}

/**
 * Unloads dictionary from memory.  Returns true if successful else false.
 */
bool unload(void)
{
    // TODO
    return false;
}
