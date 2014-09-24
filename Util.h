#ifndef UTIL_H
#define UTIL_H

#include <math.h>

#define MIN(X,Y) ((X) > (Y) ? (Y) : (X))
#define MAX(X,Y) ((X) < (Y) ? (Y) : (X))

#define ABS(X) ((X) > 0 ? (X) : -(X))
#define DIST2D(X, Y) sqrt((X) * (X) + (Y) * (Y))

typedef enum {false, true} bool;

#endif /* UTIL_H */
