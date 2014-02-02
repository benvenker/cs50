#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define NUMBER 5  // number of names to enter
int main(void)
{
    // ask the user for five names
    printf("Please give me five names: ");
    string names[NUMBER];
    for (int i = 0; i < NUMBER; i ++)
    {
        printf("Name %d\n", i+1);
        names[i] = GetString();
    }
    
    // randomly chooses and prints out one of the names
    srand(time(NULL));      // seed rand using srand with the current time
    int name = rand() % NUMBER;
    printf("%s\n", names[name]);
}
