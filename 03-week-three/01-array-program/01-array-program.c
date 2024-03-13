#include <stdio.h>

int main()
{
  int arr[10];

  arr[0] = 100;
  arr[1] = 200;
  arr[2] = arr[0] + arr[1];

  printf("%d\n", arr[0]);
  printf("%d\n", arr[1]);
  printf("%d\n", arr[2]);
  printf("%d\n", arr[9]);

  return 0;
}
