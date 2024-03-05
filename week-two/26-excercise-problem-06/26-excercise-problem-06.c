#include <stdio.h>

int main()
{
    int n, m, i;

    scanf("%d%d", &n, &m);

    if(n > 0 && m > 0) {
        if(n < m) {
            for(i = n; i <= m; i++) {
                printf("%d ", i);
            }
        }
        else {
            for(i = n; i >= m; i--) {
                printf("%d ", i);
            }
        }   
    }

    return 0;
}
