#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MIN(X,Y) ((X) > (Y) ? (Y) : (X))
#define MAX(X,Y) ((X) < (Y) ? (Y) : (X))

typedef double (*DoubleFunc)(double x);

double func(double x)
{
  return 34 * cos(x * x);
}

double doMidpoint(DoubleFunc f, double start, double end, int intervals)
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

    printf("Iteration %d: %7.9g, sum: %7.9g\n", i, intermediate, sum);
  }
  return sum;
}

double doTrapezoid(DoubleFunc f, double start, double end, int intervals)
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

    printf("Iteration %d: %7.9g, sum: %7.9g\n", i, intermediate, sum);
  }
  return sum;
}

int main(int argc, char** argv)
{
  double mpt = doMidpoint(&func, 0, 1, 4);
  double tpz = doTrapezoid(&func, 0, 1, 4);
  printf("Midpoint calculated: %7.9g\n", mpt);
  printf("Trapezoid calculated: %7.9g\n", tpz);
  return 0;
}
