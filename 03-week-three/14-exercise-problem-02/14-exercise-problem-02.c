#include <stdio.h>

int main()
{
  int N, i;
  scanf("%d", &N);
  int arra[N];

  if(N > 0) {
    for(i = 0; i < N; i++) {
      scanf("%d", &arra[i]);
    }

    int Q;
    scanf("%d", &Q);

    int index, value;

    for(i = 0; i < Q; i++) {
      scanf("%d%d", &index, &value);
      arra[index] += value;
    }

    for(i = 0; i < N; i++) {
      printf("%d ", arra[i]);
    }
  } 

  return 0;
}
