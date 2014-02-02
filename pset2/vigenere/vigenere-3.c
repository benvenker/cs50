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
    int k, p, c, enciphered;
    
    /*/ create the cipher for k /
    for (int i = 0, n = strlen(sentence); i < n; i ++) {
        int kK = atoi(argv[1][i]);
        int pK = strlen(argv[1]);
        int cK = (pK + kK) % 
    */
    
    //  create the cipher for p
    for (int i = 0, n = strlen(sentence); i < n; i ++) {  // for every character in the string
        k = atoi(argv[1]);
        p = sentence[i];
        c = (p + k) % 26 - k;
        enciphered = p + k;
        
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
