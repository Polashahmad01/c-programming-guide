#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number of chocolates: ");
    scanf("%d", &n);

    int chocolate = n;
    int packets = n;

    for(; packets >= 4;) {
        chocolate += packets / 4;
        packets = (packets / 4) + (packets % 4);
    }

    printf("You can eat %d of chocolates\n", chocolate);

    return 0;
}
