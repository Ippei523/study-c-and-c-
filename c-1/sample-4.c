#include <stdio.h>

double avg(double, double);

int main()
{
  double d1, d2, d3;
  double a = 1.2, b = 2.6, c = 3.9;

  d1 = avg(a, b);
  d2 = avg(4.7, 5.1);
  d3 = avg(c, 2.8);
  printf("d1 = %f.d2 = %f, d3 = %f\n", d1, d2, d3);
}

double avg(double x, double y)
{
  double r = (x + y) / 2;
  return r;
}
