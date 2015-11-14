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

/***SAMPLE CPP:****

#include <iostream>
#include "isPrime.h"

using namespace std;

int main()
{
  int n = 0;

  cout << "Number to check: ";
  cin >> n;

  if(isPrime(n))
    cout << n << " is prime!" << endl;
  else
    cout << n << " is not prime!" << endl;

  return 0;
}
************/
