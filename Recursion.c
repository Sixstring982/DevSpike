#include "Recursion.h"

int recursiveSum(int* nums, int numCount)
{
  if(numCount == 0)
  {
    return 0;
  }
  return *nums + recursiveSum(nums + 1, numCount - 1);
}
