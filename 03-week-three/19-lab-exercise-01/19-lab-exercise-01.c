#include <stdio.h>

int main()
{
  int n, i, j, ans = 0, count, x;
  scanf("%d", &n);

  for(i = 0; i < n; i++) {
    count = 0;
    for(j = 0; j < 3; j++) {
      scanf("%d", &x);
      count += x;
    }
    
    if(count >= 2) {
      ans++;
    }
    printf("\n");
  }

  printf("%d\n", ans);

  return 0;
}
