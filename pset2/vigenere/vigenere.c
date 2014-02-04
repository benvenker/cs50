#include <stdio.h>
#include <math.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string argv[])
{
    /*   Get the input strings   */
    if ( (argc != 2) )
    {
        printf("Usage: ./vigenere <keyword>\n");
        return 1;
    }
   
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!(isalpha(argv[1][i])))
        { 
        printf("Keyword must only contain letters A-Z and a-z\n");
        return 1; 
        }
    }
  
    
    /*  Create an array and populate it with the keyword's characters */    
    string keyword = argv[1];
    int j = strlen(keyword);
    int k[j];
    int count = 0;
    
    for (int i = 0; i < j; i++)
    {   
            if (keyword[i] >= 'a' && keyword[i] <= 'z')  // if the character is lower case
            {
                keyword[i] = keyword[i] - 32;
            }
            
            k[i] = keyword[i] -65;  // get each character into the array
    }
/* **************************************************************** */  
    
    /* Get the sentence from user */
    string sentence;
    sentence = GetString();
    
    // encipher
    for (int j=0, n = strlen(sentence); j < n; j++)
    {
        if (isalpha(sentence[j])){
        
        if((sentence[j] >= 'A') && (sentence[j] <= 'Z'))
        {
            sentence[j] = (((sentence[j] - 'A') + k[count % strlen(keyword)]) % 26) + 'A';
        }
        if((sentence[j] >= 'a') && (sentence[j] <='z'))
        {
            sentence[j] = (((sentence[j] - 'a') + k[count % strlen(keyword)]) % 26) + 'a';
            //printf("sentence[%i] = (((sentence[%i] - 'a') + k[%i mod %i = %i]) mod 26) + 'a';\n",j,j,count, strlen(keyword), count % strlen(keyword));
        }
                count ++;  
        }
        printf("%c", sentence[j]);    
    }
    printf("\n");

}
