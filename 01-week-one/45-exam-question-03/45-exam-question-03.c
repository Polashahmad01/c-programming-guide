#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);

    if(n >= 0 && m >= 0) {
        printf("%d\n", n + m);
    }

    return 0;
}
