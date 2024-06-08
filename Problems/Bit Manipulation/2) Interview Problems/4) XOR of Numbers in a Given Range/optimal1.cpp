// tc->O(1)

#include <bits/stdc++.h>

int Calculate(int n)
{
  if (n % 4 == 1)
    return 1;
  else if (n % 4 == 2)
    return n + 1;
  else if (n % 4 == 3)
    return 0;
  else if (n % 4 == 0)
    return n;

  return -1;
}

int XOR_the_range(int start, int end)
{
  int a = Calculate(start - 1);

  int b = Calculate(end);

  int XOR = a ^ b;

  return XOR;
}

int main()
{
  int start = 1;
  int end = 5;

  int ans = XOR_the_range(start, end);
  cout << "\n the xor of numbers from 1 to n is " << ans;
  return 0;
}