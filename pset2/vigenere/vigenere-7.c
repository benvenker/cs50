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
    
    /* Get the sentence from user */
    printf("enter a phrase to encrypt: \n");
    string sentence;
    sentence = GetString();
  
/*  Create an array and populate it with the keyword's characters */    
    
    string keyword = argv[1];
    int j = strlen(keyword);
    int k[j];
    
    for (int i = 0; i < j; i++)
    {
        if (keyword[i] >= 'a' && keyword[i] <= 'z')  // if the character is lower case
        {
            keyword[i] = keyword[i] - 32;
        }
        
        k[i] = keyword[i] -65;  // get each character into the array
        
        // printf("Element %i of k = %c\n", i, k[i]);
    }
/* **************************************************************** */   
   
    
    // encipher
    for (int j=0, n = strlen(sentence); j < n; j++)
    {
        if((sentence[j] >= 'A') && (sentence[j] <= 'Z'))
            // cipher formula
            sentence[j] = (((sentence[j] - 'A') + k[j % strlen(keyword)]) % 26) + 'A';;
            
        if((sentence[j] >= 'a') && (sentence[j] <='z'))
            sentence[j] = (((sentence[j] - 'a') + k[j % strlen(keyword)]) % 26) + 'a';
            
        printf("%c", sentence[j]);    
    }
    printf("\n");
    

}
