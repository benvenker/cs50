#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])  // take the user's full name as command line args
{
    if (argc != 3) { return 1; }  // quit program if more than 2 command line 
  
    printf("Hello, %s\n", argv[1]); // print a personalized greeting that includes their first name
}

