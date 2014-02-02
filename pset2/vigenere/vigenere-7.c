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
    int N = strlen(keyword);
    int k[N];
    
    for (int i = 0; i < N; i++)
    {
        if (keyword[i] >= 'a' && keyword[i] <= 'z')  // if the character is lower case
        {
            keyword[i] = keyword[i] - 32;
        }
        
        k[i] = keyword[i];  // get each character into the array
        
        
        printf("Element %i of k = %c\n", i, keyword[i]);
    }
/* **************************************************************** */   
   
    
    // encipher
    for (int j=0, k=0; j < strlen(sentence); j++, k++)
    {
        if((sentence[j] >= 'A') && (sentence[j] <= 'Z'))
            sentence[j] = ((sentence[j] - 'A') + argv[1][k % strlen(argv[1])]) % 26 + 'A';
            
        if((sentence[j] >= 'a') && (sentence[j] <='z'))
            sentence[j] = ((sentence[j] - 'a') + argv[1][k % strlen(argv[1])]) % 26 + 'a';
            
        printf("%c", sentence[j]);    
    }
    printf("\n");
    

}
