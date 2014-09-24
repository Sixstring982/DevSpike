#include <math.h>
#include <stdio.h>

#include "Approximations.h"

double func(double x)
{
  return 34 * cos(x * x);
}

int main(int argc, char** argv)
{
  double mpt = doMidpoint(&func, 0, 1, 4, true);
  double tpz = doTrapezoid(&func, 0, 1, 4, true);
  printf("Midpoint calculated: %7.9g\n", mpt);
  printf("Trapezoid calculated: %7.9g\n", tpz);
  return 0;
}
