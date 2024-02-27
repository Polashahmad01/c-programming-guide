#include <stdio.h>

int main()
{
    int base, height;

    printf("Enter the value of triangle's base and height: ");
    scanf("%d%d", &base, &height);

    int area = (base * height) / 2;

    printf("The area of the triangle is %d\n", area);

    return 0;
}
