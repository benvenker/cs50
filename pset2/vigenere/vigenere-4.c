/*
    vigenere-4.c is an attempt to first fix the sloppiness
    in the "final" version of caesar.  Please see vigenere-3.c
    for the work that was done on vigenere before improvements
    to caesar.
*/

#include <stdio.h>
#include <math.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string argv[])
{
    /*   input validation   */
    if (argc !=2)
    {
        printf("Usage: ./vigenere kword\n");
        return 1;
    }
    
    /* Get the text from user */
    printf("enter a phrase to encrypt: \n");
    string sentence;
    sentence = GetString();
    
       /* Apply the ciphers */  
    
    for (int x = 0, n= strlen(sentence); x < n; x ++) {
        int k, p, c,j, enciphered;
        
        k = atoi(argv[1][j]);
        j = atoi(argv[1][i]);
        p = sentence[i];
        c = (p + j) % 26 - j;
        enciphered = p + j;
        
        if (isalpha != NULL)
        {
            enciphered = p;
        }
      
        //  create the cipher for p
       // for (int i = 0, n = strlen(sentence); i < n; i ++) {  // for every character in the string
            
            
            // create the cipher for p
                // for as many letters as they are in sentence
                    // get the corresponding letter from k
                    // if k is shorter than sentence, keep looping until
                    // each letter in sentece has a key
            
        // detect specialcharacters
        if (isalpha != NULL)
        {
            enciphered = p;
        } 
        if (isupper(p))                               // if it's an upper case p
        {
            enciphered = 'A' + c;
            if (enciphered < 'A')                               // if char value falls below 'A'
            {   
                enciphered = 'Z' - ('@' - enciphered);              // cycle loop back to 'Z'
            }
        }        
        else if (islower(p))                          // if it's a lower case p
        {
            c = c-6;                                  // account for bigger modulo c (ugly)
            enciphered = 'a' + c;
            if (enciphered < 'a')                               // if char value falls below 'a'
            {   
                enciphered = 'z' - ('`' - enciphered);              // cycle loop back to 'z'
            }   
        }
        
        printf("%c", enciphered);
    }
    printf("\n");
    

}
