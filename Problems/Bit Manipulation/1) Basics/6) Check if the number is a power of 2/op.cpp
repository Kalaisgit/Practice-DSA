

#include <bits/stdc++.h>
bool is_power_of_2(int a)
{
  if (a <= 0)
    return false;

  bool set = ((a & (a - 1)) == 0) ? true : false; // it is a power of 2, if a & a-1 = 0

  return set;
}
int main()
{
  int a = -8;

  // 1101 -> (1* 2^0) + (0* 2^1) + (1* 2^2) + (1* 2^3) = 1+0+4+8 = 13
  // lets say i =0, ith bit in 1101 is the 1 , 110 (ithbit=1).
  // i=1, ith bit = 0, 11 (ithbit=0) 1.
  // i=2, ith bit = 1, 1 (ithbit=1) 01.
  // i=3, ith bit = 1, (ithbit=1) 101.

  // a number is a power of 2 if it has only one set bit , input - 1000 , op = yes
  // 1010, op = no
  // 2,4,8,16,32....

  if (is_power_of_2(a))
    cout << "\n Power of 2";
  else
    cout << "\n Not a power of 2";

  return 0;
}