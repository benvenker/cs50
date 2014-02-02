#include <stdio.h>
#include <math.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string argv[])
{
    /* TODO: put input validation code here */
    if (argc !=2)
    {
        printf("Usage: ./caesar-x key\n");
        return 1;
    }
    /* Apply the cipher */
    int key = atoi(argv[1]);
    
    int letter = 'T';
    
    printf("\nCalculating: %c + %d...\n", letter, key);
    
    int result = (letter + key) % 26;
    
    int enciphered = letter + key;
    
    if (isupper(letter) && (letter + key) >= 'Z')                // if it's an upper case letter
    {
        enciphered = 'A' + result - key;
    }
    
    else if (islower(letter) && (letter + key) >= 'z')
    {
        result = result-6;  // account for bigger modulo result
        enciphered = 'a' + result - key;
    }
    
   else if (letter 
     
    
    printf("(%c)%i + %i modulo 26 = result = %i\n", letter, letter, key, result);
    
    printf("The ASCII value of %c is %d.\n\n", enciphered , enciphered);
    printf("%i + %i = %i\n", letter, key, enciphered);
    
    
    /* 
    int crypto, alpha, lower, j, c;
    
    crypto = ((atoi(argv[1]))%26);
    alpha = isalpha(sentence[i]);
    lower = islower(sentence[i]);
    j = sentence[i];
    c = (sentence[i] + crypto);
    
    if (argc != 2) { return 1;}
    */
  
    
  
}
