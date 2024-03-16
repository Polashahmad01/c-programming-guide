#include <stdio.h>

int main() {

  int N, i, j;
  scanf("%d", &N);
  int arr[N];

  if(N > 0) {
    for(i = 0; i < N; i++) {
      scanf("%d", &arr[i]);
    }

    for(j = (N - 1); j >= 0; j--) {
      printf("%d ", arr[j]);
    }
  }

  return 0;
}
