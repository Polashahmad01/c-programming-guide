#include <stdio.h>

int main()
{
  int i, j;

  for(i = 0; i < 3; i++) {
    for(j = 0; j < 5; j++) {
      printf("*");
    }
    printf("\n");
  }

  i = 0;
  while (i < 3)
  {
    j = 0;
    while (j < 5)
    {
      printf("*");
      j++;
    }
    
    printf("\n");
    i++;
  }
  

  return 0;
}