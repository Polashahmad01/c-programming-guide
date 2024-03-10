#include <stdio.h>

int main()
{
    int n, k, i, next_room = 101, next_floor = 2, ans = 0;
    scanf("%d%d", &n, &k);

    for(i = 1; i <= (n *k); i++) {
        ans += next_room;
        next_room += 1;
        if(i % k == 0) {
            next_room = (100 * next_floor) + 1;
            next_floor += 1;
        }
    }

    printf("%d\n", ans);

    return 0;
}
