#include <stdio.h>

int main()
{
  int N = 5;
  int arr[N];
  int i;

  for(i = 0; i < N; i++) {
    scanf("%d", &arr[i]);
  }

  for(i = 0; i < N; i++) {
    printf("%dth position value = %d\n", i, arr[i]);
  }

  return 0;
}
