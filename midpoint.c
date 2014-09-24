#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "Approximations.h"
#include "Recursion.h"

double func(double x)
{
  return 34 * cos(x * x);
}

int* mallocInts(int size)
{
  int* ints = malloc(sizeof(int) * size);
  int i;

  for(i = 0; i < size; i++)
  {
    ints[i] = i;
  }
  return ints;
}

void freeInts(int* ints)
{
  free(ints);
}

int main(int argc, char** argv)
{
  const int intCount = 100;
  int* ints = mallocInts(intCount);
  double mpt = doMidpoint(&func, 0, 1, 4, true);
  double tpz = doTrapezoid(&func, 0, 1, 4, true);
  printf("Midpoint calculated: %7.9g\n", mpt);
  printf("Trapezoid calculated: %7.9g\n", tpz);

  printf("Int sum: %d\n", recursiveSum(ints, intCount));

  freeInts(ints);
  return 0;
}
