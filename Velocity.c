#include <stdio.h>
#include <stdlib.h>

int main()
{
  float g = 9.81;
  float m = 68.1;
  float t = 12;
  float cd = 0.25;
  float v;

  v = sqrt(g * m / cd) * tanh(sqrt(g * cd / m)* t);
  printf("Velocity result is %2.f%lf \n", v);
  return 0;

}
