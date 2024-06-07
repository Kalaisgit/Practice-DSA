// donot use multiplication or division

#include <bits/stdc++.h>
int Divide_using_bit_operators(int dividend, int divisor)
{

  if (dividend == divisor)
    return 1;

  if (dividend == INT_MIN && divisor == -1)
    return INT_MAX;
  if (dividend == INT_MAX && divisor == 1)
    return INT_MAX;
  if (dividend == INT_MAX && divisor == -1)
    return INT_MIN + 1;

  bool sign = true; // positive
  if (dividend < 0 && divisor > 0)
    sign = false;
  if (divisor < 0 && dividend > 0)
    sign = false;

  long n = labs(dividend); // abs value of long
  long d = labs(divisor);  // abs value of long

  long quotient = 0;

  while (n >= d)
  {
    int cnt = 0;
    while (n >= (d << (cnt + 1))) // d * 2^(cnt+1) //leftshift
      cnt++;                      // calculating the power that can be maximum removed from n

    quotient += (1 << cnt); // number of powers of 2 that can be removed
    n = n - (d << cnt);
    // removing the powers from increasing to decreasing in the number
  }

  if (quotient >= (INT_MAX) && sign)
    return INT_MAX;

  if (quotient >= (INT_MAX) && !sign)
    return INT_MIN;

  return sign ? quotient : -quotient;
}
int main()
{
  int dividend = 27;
  int divisor = 3;

  int ans = Divide_using_bit_operators(dividend, divisor);
  cout << "The quotient is " << ans;
  return 0;
}