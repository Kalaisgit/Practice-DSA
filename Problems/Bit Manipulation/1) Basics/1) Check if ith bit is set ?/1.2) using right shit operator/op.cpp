// using right shift operator >>

#include <bits/stdc++.h>
bool Check_ith_bit(int a, int i)
{
  int mask = a >> i;

  // if i =1, a = 1101 , mask = 0110, the 0th bit is gone, as we want the ith bit in 0 th place
  // i =2, a = 1101 , mask = 0011, the 1th bit, 0th bit are gone, so that 2nd bit can be in 0th place
  // this pblm, we use right shit operator, we apply it on the number , for left shit apply it on 1

  int set = ((mask & 1) != 0) ? 1 : 0;

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

  // if ith bit is 1, the bit is set, if it is 0, it is not set.

  int i;
  cout << "enter i = ";
  cin >> i;
  if (Check_ith_bit(a, i))
    cout << "\n ith bit is set";
  else
    cout << "\n not set";

  return 0;
}