#include <bits/stdc++.h>
int Find_power_exponentiation(int n, int p)
{
  int num = n; // if(n is double like 2.5) and power is -ve, divide 1.0/res
  int power = abs(p);

  double res = 1;

  for (int i = 1; i <= power; i++)
  {
    res *= n;
  }

  if (p < 0) // if power is negative
    return (1.0 / res);

  return res;
}
int main()
{
  int num = 2;

  int power = 3;

  int ans = Find_power_exponentiation(num, power);

  cout << "\n the power exponentiation of number is " << ans;

  return 0;
}