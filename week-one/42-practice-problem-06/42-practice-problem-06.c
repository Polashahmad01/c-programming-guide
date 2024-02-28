#include <stdio.h>

int main()
{
    int marks, bonus_marks;

    scanf("%d%d", &marks, &bonus_marks);

    if(marks + bonus_marks >= 100) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}
