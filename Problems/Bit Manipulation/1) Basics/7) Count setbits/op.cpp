
#include <bits/stdc++.h>
int Count_set_bits(int a)
{
  if (a == 0)
    return 0;
  int cnt = 0;
  while (a != 1)
  {
    cnt += a & 1; // if a&1 is odd, it will add 1 to cnt
    // bitwise operation is faster, so this is better than brute

    a = a >> 1; // right shift by 1 means divide by 2
  }
  if (a == 1)
    cnt++;
  return cnt;
}
int main()
{
  int a = 0;

  // 1101 -> (1* 2^0) + (0* 2^1) + (1* 2^2) + (1* 2^3) = 1+0+4+8 = 13
  // lets say i =0, ith bit in 1101 is the 1 , 110 (ithbit=1).
  // i=1, ith bit = 0, 11 (ithbit=0) 1.
  // i=2, ith bit = 1, 1 (ithbit=1) 01.
  // i=3, ith bit = 1, (ithbit=1) 101.

  // input - 1000 , op = 1
  // ip - 1010, op = 2

  int ans = Count_set_bits(a);
  cout << "\n Count of set bits is  " << ans;

  return 0;
}