#include <stdio.h>

int main()
{
  int N = 6;
  int arr[] = { 12, 245, 56, 345, 456, 33 };
  int i;

  for(i = 0; i < N; i++) {
    scanf("%d", &arr[i]);
  }

  int min = arr[0];

  for(i = 0; i < N; i++) {
    if(arr[i] < min) {
      min = arr[i];
    }
  }

  printf("Min is: %d", min);

  return 0;
}