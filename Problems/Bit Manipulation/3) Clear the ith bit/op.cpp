// using left shift operator <<

#include <bits/stdc++.h>
int Clear_ith_bit(int a, int i)
{
  int mask = 1 << i; // if i =1,  0001 , the mask = 0010; i =2, 0001 , mask = 0100

  int set = a & (~mask);

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

  // if ith bit is 1, the bit is cleared, then it is 0.

  int i;
  cout << "enter i = ";
  cin >> i;
  int ans = Clear_ith_bit(a, i);
  cout << "\n after clearing the ith bit  " << ans;

  return 0;
}