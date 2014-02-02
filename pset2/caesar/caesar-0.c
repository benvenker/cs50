#include <stdio.h>
#include <math.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[])  // Get the key
{ 
    if (argc != 2) { return 1;}
    
    int crypto = ((atoi(argv[1]))%26);  // set your crypto number
        printf("crypto = %i\n", crypto);
/*
    while (!(isdigit(crypto))) {        // use "isdigit" to detect if crypto isn't a digit, return 1
        printf("Nope, try again...\n");
        return 1;
    }
*/    
    // declare more variables -      
    string sentence;                      // a string
    //int j;                              // char for i-th character of the string
    // TODO: declare a bool
    
    // get the plaintext
    printf("enter a phrase to encrypt: ");
    sentence = GetString();
    
    // check if it's an alpha
    int alpha = isalpha(sentence[i]);
   // int upper = isupper(sentence[i]);
    int lower = islower(sentence[i]);
    int j = sentence[i];
    int c = (sentence[i] + crypto); // apply the wrapper formula
    
    
    // encipher
    for (int i = 0, n = strlen(sentence); i < n; i ++) {  // for every character in the string
        
        if (alpha != 0)              // if character is an upper case alpha
        {                     
            //printf("character %i is an upper case alpha\n", i);

            if (c > 26)
            {
                c = c - 26;
            } 

            printf("%c (%i) enciphered is %c (%i)\n", (char) j, j, (char) c, c);  
          
        } else if (alpha != 0 && lower !=0)        // if character is a lower case alpha
        {
            printf("%c (%i) enciphered is %c (%i)\n", sentence[i], j, (char) c, c);  
        }
        else
        {
            printf("character %c ain't an alpha, its %c\n", i, (char) i);
        } 
            // if it's upper case
            // if it's lower case 
        // do some more stuff
    }
    
    // print cipher text
}
