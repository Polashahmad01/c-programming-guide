#include <stdio.h>

int main()
{
    int numOne, numTwo;

    printf("Enter two number: ");
    scanf("%d%d", &numOne, &numTwo);

    if (numOne > 0 && numTwo > 0)
    {
        printf("%d + %d = %d\n", numOne, numTwo, numOne + numTwo);
        printf("%d - %d = %d\n", numOne, numTwo, numOne - numTwo);
        printf("%d * %d = %d\n", numOne, numTwo, numOne * numTwo);
    }
    

    return 0;
}
