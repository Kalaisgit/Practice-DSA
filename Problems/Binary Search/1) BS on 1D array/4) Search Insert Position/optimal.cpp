#include <bits/stdc++.h>
int Lower_bound(vector<int> &a, int n, int x)
{
  int ans = n;
  int low = 0;
  int high = n - 1;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (a[mid] >= x)
    {
      ans = mid;
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }
  return ans;
}
int main()
{
  vector<int> a = {1, 2, 3, 4, 6, 7, 9};
  int n = a.size();
  int x;
  cout << "\n enter x ";
  cin >> x;
  int ans = Lower_bound(a, n, x);
  cout << "\n Lower bound present at index " << ans;
  return 0;
}