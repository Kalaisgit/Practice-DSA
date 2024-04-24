#include <bits/stdc++.h>
int Find_min(vector<int> &a, int n)
{
  int low = 0;
  int high = n - 1;
  int mini = INT_MAX;
  while (low <= high)
  {
    int mid = (low + high) / 2;

    if (a[low] <= a[high]) // if search space is sorted, you may even omit this loop if u want to
    {
      mini = min(mini, a[low]);
      break;
    }

    if (a[low] <= a[mid])
    {
      mini = min(mini, a[low]);
      low = mid + 1;
    }
    else
    {
      mini = min(mini, a[mid]);
      high = mid - 1;
    }
  }
  return mini;
}
int main()
{
  vector<int> a = {3, 4, 1, 2};
  int n = a.size();
  int mini = Find_min(a, n);
  cout << "\n The minimum value in the array is " << mini;
  return 0;
}