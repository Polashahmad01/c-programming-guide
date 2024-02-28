#include <stdio.h>

int main()
{
    int number, remainder;

    number = 5;
    remainder = number % 2;

    if(remainder == 0) {
        printf("The number is positive.\n");
    }
    else {
        printf("The number is negative.\n");
    }

    return 0;
}
