#include <stdio.h>

int main()
{
  int i, j;
  float x, summ, avg;

  for(i = 1; i <= 10; i++) {
    printf("Enter the marks of %dth student: ", i);
    summ = 0.0;
    for(j = 1; j <= 3; j++) {
      scanf("%f", &x);
      summ += x;
    }

    avg = summ / 3;
    printf("Avg is %0.2lf\n", avg);
  }

  return 0;
}
