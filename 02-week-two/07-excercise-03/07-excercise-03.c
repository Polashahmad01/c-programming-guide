#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The first %d natural number is: \n", n);
    for(i = 1; i <= n; i++) {
        printf("%d ", i);
        sum += i;
    }
    printf("\nThe Sum of Natural Number upto %d terms : %d\n", n, sum);

    return 0;
}
