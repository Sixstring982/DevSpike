#ifndef APPROXIMATIONS_H
#define APPROXIMATIONS_H

#include "Util.h"

typedef double (*DoubleFunc)(double x);

extern double doMidpoint(DoubleFunc f, double start, double end, int intervals, bool print);

extern double doTrapezoid(DoubleFunc f, double start, double end, int intervals, bool print);

#endif /* APPROXIMATIONS_H */
