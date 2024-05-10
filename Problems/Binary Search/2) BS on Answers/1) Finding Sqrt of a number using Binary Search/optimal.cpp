#include <bits/stdc++.h>
int sqrt_BS(int n)
{
  int low = 1;
  int high = n;
  int ans;
  while (low <= high)
  {
    int mid = (low + high) / 2;

    long long val = mid * mid;

    if (val <= (long long)n)
    {
      ans = mid;
      low = mid + 1;
    }
    else
      high = mid - 1;
  }
  return ans;
}
int main()
{
  int n = 28;
  // ans = 5;
  // something closer to 28, so 5*5 = 25, so 5 is the ans.
  int ans = sqrt_BS(n);
  cout << "\n The sqrt of the given number is " << ans;
  return 0;
}