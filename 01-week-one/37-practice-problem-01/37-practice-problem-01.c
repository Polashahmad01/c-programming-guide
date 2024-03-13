#include <stdio.h>

int main()
{
    int num_one, num_two;

    scanf("%d%d", &num_one, &num_two);

    if(num_one > num_two) {
        printf("A is bigger.\n");
    }
    else if(num_two > num_one) {
        printf("B is bigger.\n");
    }
    else {
        printf("They are equal.\n");
    }

    return 0;
}
