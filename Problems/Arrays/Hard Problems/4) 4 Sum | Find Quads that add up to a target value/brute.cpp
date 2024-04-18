#include <bits/stdc++.h>
vector<vector<int>> Return_unique_quads_equals_to_target(vector<int> &a, int n, int target)
{
  set<vector<int>> st;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      for (int k = j + 1; k < n; k++)
      {
        for (int m = k + 1; m < n; m++)
        {
          if (a[i] + a[j] + a[k] + a[m] == target)
          {
            vector<int> temp = {a[i], a[j], a[k], a[m]};
            sort(temp.begin(), temp.end());
            st.insert(temp);
          }
        }
      }
    }
  }
  vector<vector<int>> ans(st.begin(), st.end());
  return ans;
}
int main()
{
  vector<int> a = {1, 0, -1, 0, -2, 2};
  int n = a.size();
  int target;
  cout << "\n enter target ";
  cin >> target;
  vector<vector<int>> res = Return_unique_quads_equals_to_target(a, n, target);
  for (auto it : res)
  {
    for (auto el : it)
    {
      cout << el << " ";
    }
    cout << "\n";
  }
  return 0;
}
