#include <bits/stdc++.h>
vector<int> Leaders(vector<int> &a)
{
  int maxi = INT_MIN;
  int n = a.size();
  vector<int> ans;
  for (int i = n - 1; i >= 0; i--)
  {
    if (maxi < a[i])
    {
      ans.push_back(a[i]);
    }
    maxi = max(maxi, a[i]);
  }
  return ans;
}
int main()
{
  vector<int> a = {1, 2, 3, 22, 5, 9, 6, 3};
  vector<int> leader = Leaders(a);
  for (auto it : leader)
  {
    cout << it << " ";
  }
}