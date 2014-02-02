#include <stdio.h>
#include <math.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string argv[])
{
    /* input validation code here */
    if (argc !=2)
    {
        printf("Usage: ./caesar-x key\n");
        return 1;
    }
    
    /* Get the text from user */
    printf("enter a phrase to encrypt: \n");
    string sentence;
    sentence = GetString(); 
    
    /* Apply the cipher */
    int key, letter, result, enciphered;
    
  
    for (int i = 0, n = strlen(sentence); i < n; i ++) {  // for every character in the string
        key = atoi(argv[1]);
        letter = sentence[i];
        result = (letter + key) % 26;
        enciphered = letter + key;
        
        // detect specialcharacters
        if ((' ' <= letter <= '/') || (':' <= letter <= '@') || ('{' <= letter <= '~'))
        {
            enciphered = letter;
        } 
        if (isupper(letter) && (letter + key) >= 'Z')       // if it's an upper case letter
        {
            enciphered = 'A' + result - key;
            if (enciphered < 'A')                               // if char value falls below 'A'
            {   
                enciphered = 'Z' - ('A' - enciphered);              // cycle loop back to 'Z'
            }
        }        
        else if (islower(letter) && (letter + key) >= 'z')  // if it's a lower case letter
        {
            result = result-6;                                  // account for bigger modulo result (ugly)
            enciphered = 'a' + result - key;
            if (enciphered < 'a')                               // if char value falls below 'a'
            {   
                enciphered = 'z' - ('a' - enciphered);              // cycle loop back to 'z'
            }   
        }
        printf("%c", enciphered);
        printf("\n");  
    }

}
