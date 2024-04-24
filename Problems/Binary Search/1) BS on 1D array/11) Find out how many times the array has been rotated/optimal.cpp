#include <bits/stdc++.h>
int Find_min(vector<int> &a, int n)
{
  int low = 0;
  int high = n - 1;
  int mini = INT_MAX;
  int index = -1;
  while (low <= high)
  {
    int mid = (low + high) / 2;

    if (a[low] <= a[high]) // if search space is sorted, you may even omit this loop if u want to
    {
      if (a[low] < mini)
      {
        index = low;
        mini = a[low];
      }
      break;
    }

    if (a[low] <= a[mid])
    {
      if (a[low] < mini)
      {
        index = low;
        mini = a[low];
      }
      low = mid + 1;
    }
    else
    {
      if (a[mid] < mini)
      {
        index = mid;
        mini = a[mid];
      }
      high = mid - 1;
    }
  }
  return index;
}
int main()
{
  vector<int> a = {3, 4, 1, 2};
  int n = a.size();
  int index = Find_min(a, n);
  cout << "\n Array is rotated for " << index << " times";
  return 0;
}