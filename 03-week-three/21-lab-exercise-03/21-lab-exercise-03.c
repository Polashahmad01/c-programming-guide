#include <stdio.h>

int main()
{
  int arr[105];
  int n, i, j;
  scanf("%d", &n);

  for(i = 1; i <= n; i++) {
    scanf("%d", &arr[i]);
  }

  int even_count = 0, odd_count = 0;

  for(j = 1; j <= n; j++) {
    if(arr[j] % 2 == 0) {
      even_count++;
    } else {
      odd_count++;
    }
  }

  int k, ans;
  if(even_count == 1) {
    for(i = 1; i < n; i++) {
      if(arr[i] % 2 == 0) {
        ans = i;
      }
    }
  } else {
    for(i = 1; i < n; i++) {
      if(arr[i] % 2 != 0) {
        ans = i;
      }
    }
  }

  printf("%d", ans);

  return 0;
}
