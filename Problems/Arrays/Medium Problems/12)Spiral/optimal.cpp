// wrong output
#include <bits/stdc++.h>
vector<int> printSpiral(vector<vector<int>> &a)
{
  vector<int> ans;

  int n = a.size();
  int m = a[0].size();
  int top = 0;
  int bottom = n - 1;
  int right = m - 1;
  int left = 0;

  while (left <= right && top <= bottom)
  {
    for (int i = left; i <= right; i++)
    {
      ans.push_back(a[top][i]);
    }
    top++;
    for (int i = top; i <= bottom; i++)
    {
      ans.push_back(a[i][right]);
    }
    right--;
    if (top <= bottom) // if the input has only 1 row, this makes sure it runs correct
    {
      for (int i = right; i >= bottom; i--)
      {
        ans.push_back(a[bottom][i]);
      }

      bottom--;
    }
    if (left <= right) // if there is no top
    {
      for (int i = bottom; i >= top; i--)
      {
        ans.push_back(a[i][left]);
      }
      left++;
    }
  }
  return ans;
}
int main()
{
  vector<vector<int>> a = {
      {1, 2, 3, 4, 5, 6},
      {7, 8, 9, 10, 11, 12},
      {13, 14, 15, 16, 17, 18},
      {19, 20, 21, 22, 23, 24}};

  vector<int> res = printSpiral(a);
  for (int i = 0; i < res.size(); i++)
  {
    cout << res[i] << " ";
  }
  return 0;
}