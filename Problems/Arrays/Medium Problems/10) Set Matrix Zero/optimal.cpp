#include <bits/stdc++.h>
vector<vector<int>> Set_Matrix_zero(vector<vector<int>> &a, int n, int m)
{
  // row[n]=0; a[..][0]
  // col[m]=0; a[0][..]
  int col0 = 1;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (a[i][j] == 0)
      {
        a[i][0] = 0; // mark i-th row

        if (j != 0)
        {
          a[0][j] = 0; // mark jth col except first one
        }
        else
          col0 = 0;
      }
    }
  }
  for (int i = 1; i < n; i++)
  {
    for (int j = 1; j < m; j++)
    {
      if (a[i][j] != 0)
      {
        // check for row and col
        if (a[0][j] == 0 || a[i][0] == 0)
        {
          a[i][j] = 0;
        }
      }
    }
  }
  if (a[0][0] == 0)
  {
    for (int j = 0; j < m; j++)
    {
      a[0][j] = 0; // Zero out the first row
    }
  }
  if (col0 == 0)
  {
    for (int i = 0; i < n; i++)
    {
      a[i][0] = 0; // Zero out the first column
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