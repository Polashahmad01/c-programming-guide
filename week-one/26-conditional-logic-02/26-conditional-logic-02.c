#include <stdio.h>

int main()
{
    int x, y;

    printf("Please enter two numbers: ");
    scanf("%d%d", &x, &y);

    if(x > y) {
        printf("X is large.\n");
    } else {
        printf("Y is large.\n");
    }

    return 0;
}