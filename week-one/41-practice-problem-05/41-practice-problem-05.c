#include <stdio.h>

int main()
{
    int num_one, num_two, num_three;

    scanf("%d%d%d", &num_one, &num_two, &num_three);

    if(num_one + num_two <= num_three || num_one + num_three <= num_two || num_two + num_three <= num_one) {
        printf("NO\n");
    }
    else {
        printf("YES\n");
    }

    return 0;
}
