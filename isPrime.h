/***
* Author: Ian Reymond
* Input: number to be checked for prime
* Output: boolean value, true is prime, false is not prime
***/

#include <math.h>

bool isPrime(int n)
{
  int d = 0;
  for(d=2; d<sqrt(n); ++d)
  {
    if(n%d == 0)
    {
      return false;
    }
  }
  return true;
}
