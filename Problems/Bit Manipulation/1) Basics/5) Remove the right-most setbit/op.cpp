// remove rightmost set bit , or remove lastbit

#include <bits/stdc++.h>
int Remove_rightmost_set_bit(int a)
{
  int set = a & (a - 1);

  return set;
}
int main()
{
  int a = 13;

  // 1101 -> (1* 2^0) + (0* 2^1) + (1* 2^2) + (1* 2^3) = 1+0+4+8 = 13
  // lets say i =0, ith bit in 1101 is the 1 , 110 (ithbit=1).
  // i=1, ith bit = 0, 11 (ithbit=0) 1.
  // i=2, ith bit = 1, 1 (ithbit=1) 01.
  // i=3, ith bit = 1, (ithbit=1) 101.

  // remove the first set bit from right to left, input - 1000 , op = 0000
  // 1010, op = 1000

  int ans = Remove_rightmost_set_bit(a);
  cout << "\n after clearing the rightmost set bit  " << ans;

  return 0;
}