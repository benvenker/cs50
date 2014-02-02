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
    //printf("enter a phrase to encrypt: \n");
    string sentence;
    sentence = GetString();
    
   // int argv[1] = atoi(argv[1]);
    
    // sketch
    for (int j=0, k=0; j < strlen(sentence); j++, k++)
    {
        //printf("%c", sentence[j] );
        
        if ((sentence[j] >= 'A') && (sentence[j] <= 'Z'))   // if the j-th letter of user input is upper case
        {
            sentence[j] = ((sentence[j] - 'A') + argv[1][k % strlen(argv[1])]) % 26 + 'A';
        } 
        if ((sentence[j] >= 'a') && (sentence[j] <='z'))    // if the j-th letter of user input is lower case
        {
            sentence[j] = ((sentence[j] - 'a') + argv[1][k % strlen(argv[1])]) % 26 + 'a';
        }    
        printf("%c", sentence[j] );    
    }
    printf("\n");
    
   // printf("%c\n", sentence[1]);
    

}
