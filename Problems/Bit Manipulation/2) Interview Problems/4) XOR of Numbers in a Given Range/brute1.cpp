// start to end is the range
// tc->O(start+end)

#include <bits/stdc++.h>
int XOR_the_range(int start, int end)
{
  int ans = 0;

  for (int i = start; i <= end; i++)
  {
    ans = ans ^ i;
  }
  return ans;
}

int main()
{
  int start = 3;
  int end = 10;

  int ans = XOR_the_range(start, end);
  cout << "\n the xor of numbers from 1 to n is " << ans;
  return 0;
}