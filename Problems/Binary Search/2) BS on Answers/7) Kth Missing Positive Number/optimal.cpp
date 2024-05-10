#include <bits/stdc++.h>
int Find_missing(vector<int> &a, int k)
{
  int n = a.size();
  int low = 0;
  int high = n - 1;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    int missing = a[mid] - (mid + 1);
    if (missing < k)
      low = mid + 1;
    else
      high = mid - 1;
  }
  return high + 1 + k;
}
int main()
{
  vector<int> a = {2, 3, 4, 7, 11};
  int k = 5;
  int kth_missing_number = Find_missing(a, k);
  cout << "\n The kth missing positive number in an array is " << kth_missing_number;
}