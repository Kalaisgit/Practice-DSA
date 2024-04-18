// TC--> O(N)

#include <bits/stdc++.h>
int Stock_Market(vector<int> &a)
{
  int n = a.size();
  int selling_price;
  int max_profit = 0;
  int mini = a[0];
  for (int i = 1; i < n; i++)
  {
    selling_price = a[i] - mini;
    max_profit = max(max_profit, selling_price);
    mini = min(mini, a[i]);
  }
  return max_profit;
}

int main()
{
  vector<int> a = {1, 7, 6, 5, 4, 8, 7, 8};
  int num = Stock_Market(a);
  cout << num;
  return 0;
}