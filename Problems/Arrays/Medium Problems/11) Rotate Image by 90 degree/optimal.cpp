#include <bits/stdc++.h>
vector<vector<int>> Rotateby90(vector<vector<int>> &a)
{
  // transpose
  int n = a.size();
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      swap(a[i][j], a[j][i]);
    }
  }
  // reverse every row
  for (int i = 0; i < n; i++)
  {
    reverse(a[i].begin(), a[i].end());
  }
  return a;
}
int main()
{
  vector<vector<int>> a = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  /*
  input :
  1 2 3
  4 5 6
  7 8 9

  output :
  7 4 1
  8 5 2
  9 6 3
  */
  vector<vector<int>> res = Rotateby90(a);
  for (auto it : res)
  {
    for (auto el : it)
    {
      cout << el;
    }
    cout << "\n";
  }
  return 0;
}