// tc->O(N)

#include <bits/stdc++.h>
int XOR_the_range(int n)
{
  int ans = 0;

  for (int i = 1; i <= n; i++)
  {
    ans = ans ^ i;
  }
  return ans;
}

int main()
{
  int n = 3;

  int ans = XOR_the_range(n);
  cout << "\n the xor of numbers from 1 to n is " << ans;
  return 0;
}