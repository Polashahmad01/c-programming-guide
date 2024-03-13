#include <stdio.h>

int main()
{
    int x, y, z;

    printf("Please enter three numbers: ");
    scanf("%d%d%d", &x, &y, &z);

    if(x > y && x > z) {
        printf("X is large.");
    } else if (y > x && y > z) {
        printf("Y is large.");
    } else if (z > x && z > y) {
        printf("Z is large.");
    } else {
        printf("They are equal.");
    }
}
