#include <bits/stdc++.h>
int Find_max_ind(vector<vector<int>> &a, int mid, int n, int m)
{
  int max_ind_row = -1;
  int max_value = -1;
  for (int i = 0; i < n; i++)
  {
    if (a[i][mid] > max_value)
    {
      max_value = a[i][mid];
      max_ind_row = i;
    }
  }
  return max_ind_row;
}
pair<int, int> Find_co_ordinate_of_peak_element(vector<vector<int>> &a, int n, int m)
{
  int low = 0;
  int high = m - 1;
  while (low <= high)
  {
    int mid = (low + high) / 2;

    int max_ind_row = Find_max_ind(a, mid, n, m);

    int left = mid - 1 >= 0 ? a[max_ind_row][mid - 1] : -1;
    int right = mid + 1 < m ? a[max_ind_row][mid + 1] : -1;

    if (a[max_ind_row][mid] > left && a[max_ind_row][mid] > right)
      return {max_ind_row, mid};
    else if (a[max_ind_row][mid] > left)
      high = mid - 1;
    else
      low = mid + 1;
  }
  return {-1, -1};
}
int main()
{
  vector<vector<int>> a = {
      {10, 20, 15},
      {21, 30, 14},
      {7, 16, 32}};

  int n = a.size();
  int m = a[0].size();
  pair<int, int> peak = Find_co_ordinate_of_peak_element(a, n, m);
  cout << "\n the co-ordinate of peak element in the array is " << peak.first << "," << peak.second;
  return 0;
}