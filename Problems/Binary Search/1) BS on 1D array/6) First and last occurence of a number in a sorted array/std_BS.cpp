#include <bits/stdc++.h>

int first(vector<int> &a, int n, int x)
{
  int low = 0;
  int high = n - 1;
  int first = -1;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (a[mid] == x)
    {
      first = mid;
      high = mid - 1;
    }
    else if (a[mid] < x)
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
  return first;
}

int last(vector<int> &a, int n, int x)
{
  int low = 0;
  int high = n - 1;
  int last = -1;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (a[mid] == x)
    {
      last = mid;
      low = mid + 1;
    }
    else if (a[mid] < x)
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
  return last;
}

pair<int, int> occurence(vector<int> &a, int n, int x)

{
  int el1 = first(a, n, x);
  int el2 = last(a, n, x);

  return {el1, el2};
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