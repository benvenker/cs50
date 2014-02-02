#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    // ask user for a string
    printf("String: ");
    string s = GetString();
    
    // print each character on a new line
    for (int i = 0, n = strlen(s); i < n ; i++)
    {
        printf("%c\n", s[i]);
    }
    return 0;
}
