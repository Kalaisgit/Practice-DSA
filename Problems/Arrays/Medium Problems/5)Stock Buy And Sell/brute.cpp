// Idea is to get max profit
// O(N^2)

#include <bits/stdc++.h>
int Stock_Market(vector<int> &a)
{
  int n = a.size();
  int profit = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (a[j] > a[i])
      {

        profit = max(a[j] - a[i], profit);
        // 9-1=8
      }
    }
  }
  return profit;
}
int main()
{
  vector<int> a = {7, 7, 4, 3, 2, 6, 1, 8, 9, 1};
  int num = Stock_Market(a);
  cout << num;
  return 0;
}