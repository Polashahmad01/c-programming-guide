#include <stdio.h>

int main()
{
    int x, y;
    char chx, chy;
    scanf("%d%c%d%c", &x, &chx, &y, &chy);

    if(x >= 0 && y >= 0) {
        printf("%d%%\n", x * y);
    }    

    return 0;
}
