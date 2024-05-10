#include <bits/stdc++.h>
bool BS_2D(vector<vector<int>> &a, int n, int m, int target)
{
  int low = 0;
  int high = (n * m) - 1;

  while (low <= high)
  {
    int mid = low + (high - low) / 2;

    int row = mid / m;
    int col = mid % m;

    if (a[row][col] == target)
      return true;
    else if (a[row][col] < target)
      low = mid + 1;
    else
      high = mid - 1;
  }
  return false;
}
int main()
{
  vector<vector<int>> a = {
      {1, 2, 4, 5, 6},
      {7, 9, 10, 11, 12},
      {13, 14, 16, 17, 18},
      {19, 21, 24, 26, 27}};
  int target = 30;
  int n = a.size();
  int m = a[0].size();
  if (BS_2D(a, n, m, target))
    cout << "\n The target is present in array";
  else
    cout << "\n The target is not present in array";

  return 0;
}