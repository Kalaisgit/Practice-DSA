#include <bits/stdc++.h>
int lower_bound(vector<int> &a, int n, int x)
{
  int low = 0;
  int high = n - 1;
  int ans = -1;
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
int upper_bound(vector<int> &a, int n, int x)
{
  int ans = upper_bound(a.begin(), a.end(), x) - a.begin();
  return ans;
}

pair<int, int> occurence(vector<int> &a, int n, int x)

{
  int lb = lower_bound(a, n, x);
  if (lb == -1 || a[lb] != x)
  {
    return {-1, -1};
  }

  return {lb, upper_bound(a, n, x) - 1};
}
int main()
{
  vector<int> a = {0, 0, 1, 1, 2, 2, 2, 2};
  int n = a.size();
  int x;
  cout << "\n enter number ";
  cin >> x;
  pair<int, int> res = occurence(a, n, x);
  cout << "\n"
       << res.first << ", " << res.second;
}