#include <bits/stdc++.h>
double Find_power_exponentiation(double n, int p)
{
  double num = (double)n; // if(n is double like 2.5) and power is -ve, divide 1.0/res
  int power = abs(p);

  double res = 1;

  while (power > 0)
  {

    if (power % 2 == 1)
    {
      res *= num;
      power = power - 1;
    }
    else
    {
      num = num * num;
      power = power / 2;
    }
  }

  if (p < 0) // if power is negative
    return (1.0 / res);

  return res;
}
int main()
{
  double num = 2.50;

  int power = 3;

  double ans = Find_power_exponentiation(num, power);

  cout << "\n the power exponentiation of number is " << ans;

  return 0;
}