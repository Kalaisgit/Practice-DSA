// using first occurence binary search algol i solved this
// we can use upperbound or lower bound too

#include <bits/stdc++.h>
int first_occurence_of_1(vector<int> &arr, int m)
{
  int low = 0;
  int high = m - 1;

  while (low <= high)
  {
    int mid = (low + high) / 2;

    if (arr[mid] == 1)
      high = mid - 1;
    else if (arr[mid] < 1)
      low = mid + 1;
  }
  return low;
}
int main()
{
  vector<vector<int>> a = {
      {0, 0, 0, 1, 1, 1},
      {0, 0, 0, 0, 0, 0},
      {1, 1, 1, 1, 1, 1},
      {0, 0, 0, 0, 0, 1},
      {1, 1, 1, 1, 1, 1}};
  int n = a.size();
  int m = a[0].size();
  int ind = -1;
  int cnt_1s = 0;
  for (int i = 0; i < n; i++)
  {

    int cnt = first_occurence_of_1(a[i], m);
    int count = m - cnt;
    if (count > cnt_1s)
    {
      cnt_1s = count;
      ind = i;
    }
  }

  cout << "\n The row with maximum number of 1s in it is " << ind << "th row";
  return 0;
}