#include <stdio.h>

int main()
{
    int sideOne, sideTwo, sideThree;

    printf("Enter the value of triangle's three side: ");
    scanf("%d%d%d", &sideOne, &sideTwo, &sideThree);

    int area = (sideOne + sideTwo + sideThree) / 2;

    printf("The area is %d\n", area);

    return 0;
}
