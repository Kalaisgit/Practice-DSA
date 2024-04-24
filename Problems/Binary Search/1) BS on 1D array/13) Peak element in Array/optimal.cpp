#include <bits/stdc++.h>

int Peak_elements(vector<int> &a, int n)
{
  if (n == 1)
    return a[0];
  if (a[0] > a[1])
    return a[0];
  if (a[n - 1] > a[n - 2])
    return a[n - 1];

  int low = 1;
  int high = n - 2;
  while (low <= high)
  {
    int mid = (low + high) / 2;

    if (a[mid] > a[mid + 1] && a[mid] > a[mid - 1])
      return a[mid];

    if (a[mid] > a[mid - 1])
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }

  return -1;
}
int main()
{
  vector<int> a = {1, 2, 3, 4, 6, 2, 1};

  int n = a.size();
  int peak = Peak_elements(a, n);
  cout << "\n The peak element is " << peak;

  vector<int> b = {1, 2, 3, 4, 5};

  int m = b.size();
  peak = Peak_elements(b, m);
  cout << "\n The peak element is " << peak;

  return 0;
}
