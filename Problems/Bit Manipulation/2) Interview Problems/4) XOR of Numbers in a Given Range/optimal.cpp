// tc->O(1)

#include <bits/stdc++.h>
int XOR_the_range(int n)
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

int main()
{
  int n = 3;

  int ans = XOR_the_range(n);
  cout << "\n the xor of numbers from 1 to n is " << ans;
  return 0;
}