#include <stdio.h>

int main()
{
    int n, i, w, sum = 0;

    printf("Enter the number of passengers: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        scanf("%d", &w);
        sum += w;
    }

    printf("The total weight of the passengers is: %d\n", sum);

    return 0;
}