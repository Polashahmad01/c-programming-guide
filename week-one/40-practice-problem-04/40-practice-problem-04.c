#include <stdio.h>

int main()
{
    int marks;

    scanf("%d", &marks);

    if(marks > 0) {
        if(marks > 0 && marks <= 32) {
            printf("F\n");
        }
        else if(marks >= 33 && marks <= 39) {
            printf("D\n");
        }
        else if(marks >= 40 && marks <= 49) {
            printf("C\n");
        }
        else if(marks >= 50 && marks <= 59) {
            printf("B\n");
        }
        else if(marks >= 60 && marks <= 69) {
            printf("A-\n");
        }
        else if(marks >= 70 && marks <= 79) {
            printf("A\n");
        }
        else {
            printf("A+\n");
        }
    }

    return 0;
}
