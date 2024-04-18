// TC --> O(N^3) (approximtely)

#include <bits/stdc++.h>
void Row_alter(vector<vector<int>> &a, int n, int m, int i)
{
  for (int j = 0; j < m; j++)
  {
    if (a[i][j] != 0)
    {
      a[i][j] = -1;
    }
  }
}
void Column_alter(vector<vector<int>> &a, int n, int m, int j)
{
  for (int i = 0; i < n; i++)
  {
    if (a[i][j] != 0)
    {
      a[i][j] = -1;
    }
  }
}

vector<vector<int>> Set_Matrix_zero(vector<vector<int>> &a, int n, int m)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (a[i][j] == 0)
      {
        Row_alter(a, n, m, i);
        Column_alter(a, n, m, j);
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (a[i][j] == -1)
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