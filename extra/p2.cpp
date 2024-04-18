#include <bits/stdc++.h>

int sumOfAllDivisors(int n)
{
  int i;
  int sum = 0;
  for (int t = n; t >= 0; t--)
  {
    for (i = 1; i <= t; i++)
    {
      if (t % i == 0)
      {
        sum = sum + i;
      }
    }
  }
  cout << sum;
  return 0;
}

int main()
{
  int n;
  cin >> n;
  sumOfAllDivisors(n);
  return 0;
}