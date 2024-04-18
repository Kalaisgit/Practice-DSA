#include <bits/stdc++.h>
vector<vector<int>> Rotateby90(vector<vector<int>> &a)
{
  int n = a.size();
  vector<vector<int>> ans(n, vector<int>(n, 0));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      ans[j][(n - 1) - i] = a[i][j];
    }
  }
  return ans;
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