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
            keyword[i] = keyword[i] - 32;
        }
        
        k[i] = keyword[i];  // get each character into the array
        
        
        printf("Element %i of k = %c\n", i, k[i]);
    }
    
}
