#include <bits/stdc++.h>

vector<vector<int>> Set_Matrix_zero(vector<vector<int>> &a, int n, int m)
{
  vector<int> row(n, 0);
  vector<int> col(m, 0);

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (a[i][j] == 0)
      {
        row[i] = 1;
        col[j] = 1;
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (row[i] || col[j])
      {
        a[i][j] = 0;
      }
    }
  }
  return a;
}

int main()
{
  vector<vector<int>> a = {{1, 1, 1}, {0, 1, 1}, {1, 1, 1}, {1, 1, 1}};

  // ip:
  /*
  1 1 1
  0 1 1
  1 1 1
  1 1 1
  */

  // op:
  /*
  0 1 1
  0 0 0
  0 1 1
  0 1 1
  */
  int n = a.size();    // rows
  int m = a[0].size(); // columns

  vector<vector<int>> res = Set_Matrix_zero(a, n, m);
  for (auto it : res) // iterate each row
  {
    for (auto el : it) // iterate each element in that row
    {
      cout << el << " ";
    }
    cout << "\n";
  }
  return 0;
}