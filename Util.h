#ifndef UTIL_H
#define UTIL_H

#include <math.h>

#define MIN(X,Y) ((X) > (Y) ? (Y) : (X))
#define MAX(X,Y) ((X) < (Y) ? (Y) : (X))

#define ABS(X) ((X) > 0 ? (X) : -(X))
#define DIST2D(X, Y) sqrt((X) * (X) + (Y) * (Y))
#define DIST3D(X, Y, Z) sqrt((X) * (X) + (Y) * (Y) + (Z) * (Z))

#define FALSE 0
#define TRUE 1

typedef enum {false, true} bool;

#endif /* UTIL_H */
