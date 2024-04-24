#include <bits/stdc++.h>
int floor(vector<int> &a, int n, int x)
{
  int ans = -1;
  int low = 0;
  int high = n - 1;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (a[mid] <= x)
    {
      ans = a[mid];
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
  return ans;
}

int ceil(vector<int> &a, int n, int x)
{
  int ans = -1;
  int low = 0;
  int high = n - 1;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (a[mid] >= x)
    {
      ans = a[mid];
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
  vector<int> a = {3, 4, 4, 7, 8, 10};
  int n = a.size();
  int x;
  cout << "\n enter x ";
  cin >> x;
  int ans = floor(a, n, x);
  cout << "\n Floor is " << ans;
  int y;
  cout << "\n enter y ";
  cin >> y;
  ans = ceil(a, n, y);
  cout << "\n ceil is " << ans;
  return 0;
}