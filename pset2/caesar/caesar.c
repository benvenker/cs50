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
    
    /*  Create an array and populate it with the keyword's characters */    
   // string keyword = argv[1];
   // int j = strlen(keyword);
    int k = atoi(argv[1]);

    /* Get the sentence from user */
    string sentence;
    sentence = GetString();
    
    // encipher
    for (int j=0, n = strlen(sentence); j < n; j++)
    {
        if (isalpha(sentence[j]))
        {
            if((sentence[j] >= 'A') && (sentence[j] <= 'Z'))
            {
                sentence[j] = (((sentence[j] - 'A') + k) % 26) + 'A';
            }
            if((sentence[j] >= 'a') && (sentence[j] <='z'))
            {
                sentence[j] = (((sentence[j] - 'a') + k) % 26) + 'a';
                //printf("sentence[%i] = (((sentence[%i] - 'a') + k[%i mod %i = %i]) mod 26) + 'a';\n",j,j,count, strlen(keyword), count % strlen(keyword));
            }
        }
        printf("%c", sentence[j]);    
    }
    printf("\n");
}
