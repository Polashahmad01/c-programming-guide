#include <stdio.h>

int main()
{
    char ch = 'W';

    if(ch >= 'a' && ch <= 'z') {
        printf("%c is lowercase\n", ch);
    }
    else if(ch >= 'A' && ch <= 'Z') {
        printf("%c is uppercase\n", ch);
    }

    return 0;
}
