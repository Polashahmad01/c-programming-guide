#include <stdio.h>

int main()
{
  int N;
  scanf("%d", &N);

  int array[N], i, j;

  if(N > 0) {
    for(i = 0; i < N; i++) {
      scanf("%d", &array[i]);
    }

    int isUnique = 1;

    for(j = 0; j < N; j++) {
      if(array[j] != array[0]) {
        isUnique = 0;
      }
    }

    if(isUnique) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }

  return 0;
}
