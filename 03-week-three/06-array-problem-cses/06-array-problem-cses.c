#include <stdio.h>

int main()
{
  int N;
  int arr[2000001];
  int i, x;

  scanf("%d", &N);

  for(i = 1; i < N; i++) {
    scanf("%d", &x);
    arr[x] = 1;
  }

  for(i = 1; i <= N; i++) {
    if(arr[i] == 0) {
      printf("%d", i);
      break;
    }
  }

  return 0;
}
