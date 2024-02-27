#include <stdio.h>

int main()
{
    int numOne, numTwo;

    printf("Enter two numbers: ");
    scanf("%d%d", &numOne, &numTwo);

    int sum;
    sum = numOne + numTwo;

    printf("The sum of the two numbers is %d\n", sum);

    return 0;
}
