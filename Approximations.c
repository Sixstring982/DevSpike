#include "Approximations.h"

#include <math.h>
#include <stdio.h>

double doMidpoint(DoubleFunc f, double start, double end, int intervals, bool print)
{
  int i;
  double sum = 0.0;
  double intermediate;
  double intervalSize = (end - start) / intervals;
  start += (intervalSize / 2);

  for(i = 0; i < intervals; i++)
  {
    intermediate = intervalSize * f(start);
    sum += intermediate;
    start += intervalSize;

    if(print)
    {
      printf("Iteration %d: %7.9g, sum: %7.9g\n", i, intermediate, sum);
    }
  }
  return sum;
}

double doTrapezoid(DoubleFunc f, double start, double end, int intervals, bool print)
{
  int i;
  double sum = 0.0;
  double intermediate;
  double intervalSize = (end - start) / intervals;

  for(i = 0; i < intervals; i++)
  {
    double f1 = f(start + (i * intervalSize));
    double f2 = f(start + ((i + 1) * intervalSize));
    double min = MIN(f1, f2);
    double max = MAX(f1, f2);

    intermediate = min * intervalSize;
    intermediate += (intervalSize * (max - min)) / 2.0;
    sum += intermediate;

    if(print)
    {
      printf("Iteration %d: %7.9g, sum: %7.9g\n", i, intermediate, sum);
    }
  }
  return sum;
}
