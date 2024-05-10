#include <bits/stdc++.h>
int Multiply(int mid, int n, int m)
{
  int val = 1;
  for (int i = 0; i < n; i++)
  {
    val = val * mid;
    if (val > m)
    {
      return 2;
    }
  }
  if (val == m)
    return 1;

  return 0;
}
int Nth_root(int m, int n)
{
  int low = 1;
  int high = m;
  while (low <= high)
  {
    long long mid = (low + high) / 2;

    int val = Multiply(mid, n, m);

    if (val == 1)
    {
      return mid;
    }
    else if (val == 2)
      high = mid - 1;
    else
      low = mid + 1;
  }
  return -1;
}

int main()
{
  int m = 27;
  int n = 3;
  int ans = Nth_root(m, n);
  cout << "\n Nth root of a number is " << ans;
  return 0;
}