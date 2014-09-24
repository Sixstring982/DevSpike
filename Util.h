#ifndef UTIL_H
#define UTIL_H

#define MIN(X,Y) ((X) > (Y) ? (Y) : (X))
#define MAX(X,Y) ((X) < (Y) ? (Y) : (X))

#define ABS(X) ((X) > 0 ? (X) : -(X))

typedef enum {false, true} bool;

#endif /* UTIL_H */
