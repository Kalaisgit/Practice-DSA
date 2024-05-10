#include <bits/stdc++.h>
bool BS_2D(vector<vector<int>> &a, int n, int m, int target)
{
  int row = 0;
  int col = m - 1;
  while (row < n && col >= 0)
  {
    if (a[row][col] == target)
      return true;
    else if (a[row][col] < target)
      row++;
    else
      col--;
  }
  return false;
}
int main()
{
  vector<vector<int>> a = {
      {1, 4, 7, 10, 11},
      {2, 9, 12, 13, 14},
      {4, 10, 16, 17, 18},
      {6, 15, 24, 26, 27}};
  int target = 16;
  int n = a.size();
  int m = a[0].size();
  if (BS_2D(a, n, m, target))
    cout << "\n The target is present in array";
  else
    cout << "\n The target is not present in array";

  return 0;
}