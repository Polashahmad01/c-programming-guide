#include <stdio.h>

int main()
{
  int N;
  scanf("%d", &N);

  if(N > 0) {
    int array[N];
    int i;

    for(i = 0; i < N; i++) {
      scanf("%d", &array[i]);
    }

    for(int j = 0; j < N; j++) {
      printf("%d - ", array[j]);
      for(int k = 0; k < N; k++) {
        if(array[j] != array[k]) {
          printf("%d ", array[k]);
        }
      }
      printf("\n");
    }
  }

  return 0;
}
