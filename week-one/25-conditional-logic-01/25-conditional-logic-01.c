#include <stdio.h>

int main()
{
    int x;
    printf("Please enter a number: ");
    scanf("%d", &x);

    if(x % 2 == 0) {
        printf("%d is a even number.\n", x);
    } else {
        printf("%d is a odd number.\n", x);
    }

    return 0;
}