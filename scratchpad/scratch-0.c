#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{   
    long long cardNum = GetLongLong();
    
    char * convertNumberIntoArray(1234567812345678) {
    int length = (int)floor(log10((float)cardNum)) + 1;
    char * arr = new char[length];
    int i = 0;
    do {
    	arr[i] = cardNum % 10;
    	number /= 10;
    	i++;
    } while (cardNum != 0);
    return arr;
}
}
