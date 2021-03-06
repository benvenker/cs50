#include <stdio.h>
#include <math.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string argv[])
{
    /*   Get the input strings   */
    if (argc !=2)
    {
        printf("Usage: ./vigenere kword\n");
        return 1;
    }
    
    /* Get the sentence from user 
    printf("enter a phrase to encrypt: \n");
    string sentence;
    sentence = GetString();
    */
    
    string keyword = argv[1];
    int j = strlen(keyword);
    int k[j];
   
    printf("The keyword is: %s\n", keyword);
    printf("The third character is: %c\n", keyword[2]);
    
    // get the characters of keyword into an array
    for (int i = 0; i < j; i++)
    {
        if (keyword[i] >= 'a' && keyword[i] <= 'z')  // if the character is lower case
        {
            keyword[i] = keyword[i] - 32;             // convert to upper case   
        }
        
        k[i] = keyword[i] - 65;
        // also tried: k[i] = keyword[i] - 'A';
        
        printf("Element %i of k = %i\n", i, k[i]);
    }
    printf("%i - %i = %i\n", k[0], 65, k[0] - 65);
    printf("K[] = %i, %i, %i, %i, %i\n", k[0], k[1], k[2], k[3], k[4]);
    
    
}
