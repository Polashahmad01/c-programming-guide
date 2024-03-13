#include <stdio.h>

int main()
{
  int N;
  int arr[100];
  int i;

  scanf("%d", &N);

  for(i = 0; i < N; i++) {
    scanf("%d", &arr[i]);
  }

  int even_count = 0, odd_count = 0;

  for(i = 0; i < N; i++) {
    if(arr[i] % 2 == 0) {
      even_count += 1;
    } else {
      odd_count += 1;
    }
  }

  printf("Even: %d\n", even_count);
  printf("Odd: %d\n", odd_count);

  return 0;
}