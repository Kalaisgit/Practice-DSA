#include <bits/stdc++.h>
vector<int> Leaders(vector<int> &a)
{
  int n = a.size();
  vector<int> res;
  for (int i = 0; i < n; i++)
  {
    bool leader = true;
    for (int j = i + 1; j < n; j++)
    {
      if (a[j] > a[i])
      {
        leader = false;
      }
    }
    if (leader == true)
    {
      res.push_back(a[i]);
    }
  }
  reverse(res.begin(), res.end());
  return res;
}
int main()
{
  vector<int> a = {1, 2, 3, 22, 5, 9, 6};
  vector<int> leader = Leaders(a);
  for (auto it : leader)
  {
    cout << it << " ";
  }
}