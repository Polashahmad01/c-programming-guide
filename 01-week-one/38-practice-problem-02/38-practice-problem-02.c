#include <stdio.h>

int main()
{
    int num_one, num_two, num_three;

    scanf("%d%d%d", &num_one, &num_two, &num_three);

    if(num_one > num_two && num_one > num_three) {
        printf("A is bigger.\n");
    }
    else if (num_two > num_one && num_two > num_three) {
        printf("B is bigger.\n");
    }
    else if (num_three > num_one && num_three > num_two) {
        printf("C is bigger.\n");
    }
    else {
        printf("They are equal.\n");
    }

    return 0;
}
