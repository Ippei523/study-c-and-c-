#include <stdio.h>

int main()
{
  double d[3];
  double sum, avg;
  int i;

  d[0] = 1.2;
  d[1] = 2.6;
  d[2] = 3.9;
  sum = 0.0;
  for (i = 0; i < 3; i++)
  {
    printf("%f\n", d[i]);
    sum += d[i];
  }
  printf("\n");
  avg = sum / 3;
  printf("合計値%f\n", sum);
  printf("平均値%f\n", avg);
}