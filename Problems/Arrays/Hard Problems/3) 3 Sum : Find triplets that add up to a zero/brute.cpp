#include <bits/stdc++.h>
vector<vector<int>> Return_unique_triplets_equals_to_0(vector<int> &a)
{
  set<vector<int>> st;
  int n = a.size();
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      for (int k = j + 1; k < n; k++)
      {
        if (a[i] + a[j] + a[k] == 0)
        {
          vector<int> temp;
          temp.push_back(a[i]);
          temp.push_back(a[j]);
          temp.push_back(a[k]);
          sort(temp.begin(), temp.end());
          st.insert(temp);
        }
      }
    }
  }
  vector<vector<int>> ans(st.begin(), st.end());
  return ans;
}
int main()
{
  vector<int> a = {1, -1, 2, 0, 3, -1, -1, 4, -3, -1};
  vector<vector<int>> res = Return_unique_triplets_equals_to_0(a);
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