#include <stdio.h>

int main()
{
    int x, y;

    printf("Please enter two numbers: ");
    scanf("%d%d", &x, &y);

    if(x > y) {
        printf("X is large.");
    } else if (y > x) {
        printf("Y is large.");
    } else {
        printf("They are equal.");
    }

    return 0;
}