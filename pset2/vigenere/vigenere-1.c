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
        printf("Usage: ./caesar-x key\n");
        return 1;
    }
    
    /* Get the text from user */
    printf("enter a phrase to encrypt: \n");
    string sentence;
    sentence = GetString();
    
    int keyword, key, lengthK, letter, shift, enciphered;
    
    keyword = atoi(argv[1]);
    lengthK = strlen(argv[1]);

    //shift = (letter + key) % lengthK;
    
    for (int i = 0, n = strlen(sentence); i < n; i ++) {  // for every character in the string
        key = argv[1][i];
        letter = sentence[i];
        shift = (letter + key) % lengthK;
        enciphered = letter + key;
        
        if (shift < 0)
        {
            shift = -1*shift;
        }
        // detect specialcharacters
        if ((' ' <= letter <= '/') || (':' <= letter <= '@') || ('{' <= letter <= '~'))
        {
            enciphered = letter;
        } 
        if (isupper(letter))                               // if it's an upper case letter
        {
            enciphered = 'A' + shift;
            if (enciphered < 'A')                               // if char value falls below 'A'
            {   
                enciphered = 'Z' - ('@' - enciphered);              // cycle loop back to 'Z'
            }
        }
        else if (islower(letter))                          // if it's a lower case letter
        {
            shift = shift-6;                                  // account for bigger modulo result (ugly)
            enciphered = 'a' + shift;
            if (enciphered < 'a')                               // if char value falls below 'a'
            {   
                enciphered = 'z' - ('`' - enciphered);              // cycle loop back to 'z'
            }   
        }        
        printf("%c (%i) + %c (%i) = %c (%i)\n", letter, letter, shift, shift, enciphered, enciphered);
    /*    
    printf("keyword = %c\n", keyword);
    printf("key = %c, = %i\n", key, key);
    printf("keyword length = %i\n", lengthK);
    printf("letter to shift = %c, shift = %i, \nresult of %i + %i = %i(%c)  \n", letter, shift, letter, shift, letter + shift, letter + shift);
    */
    
    printf("%c", enciphered);
        
    }
    printf("\n");
   
}
