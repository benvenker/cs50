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
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }
    
    /* Get the text from user */
    printf("enter a phrase to encrypt: \n");
    string sentence;
    sentence = GetString();
    
    // create the loop for the keyword cipher
    for (int i = 0, n = strlen(sentence); i < n; i ++)
    {   
        
        int key, letter, shift, enciphered;
        
        string keyWord = argv[1];           // the keyword entered at command line
        key = argv[1][i];     // key = the integer value of the i-th character of the keyword
        letter = sentence[i];        // the i-th letter of sentence
        shift = (letter + key) % (strlen(keyWord));
        enciphered = letter + key;
        
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
       // printf("For letter: %c(%i)  with keyWord: %s, length of: %i and key: %c(%i),  the shift is: %c (%i)\n)", letter, letter, keyWord, strlen(keyWord), key, key, (char) shift, shift);
        
       printf("%c", enciphered);
    }
    printf("\n");
  //  printf("keyword = %i\n", keyword[x]
    
   

}
