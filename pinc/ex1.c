#include <stdio.h>
#include <cs50.h>

int main (void)

{
    int n; 
    string hash, hashes;

    hash = '#';
    
    for ( n = 0; n < 10; n = n++)
        hashes = hash + '#';
        
    printf ("%s\n.", hashes);
    
    return 0;
        
}
