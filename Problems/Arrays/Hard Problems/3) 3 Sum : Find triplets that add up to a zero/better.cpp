#include <bits/stdc++.h>
vector<vector<int>> Return_unique_triplets_equals_to_0(vector<int> &a)
{
  set<vector<int>> st;
  int n = a.size();
  for (int i = 0; i < n; i++)
  {
    set<int> hashset; // reinitializes everytime i increments
    for (int j = i + 1; j < n; j++)
    {
      int third = -(a[i] + a[j]);
      if (hashset.find(third) != hashset.end())
      {
        vector<int> temp = {a[i], a[j], third};
        sort(temp.begin(), temp.end());
        st.insert(temp);
      }
      hashset.insert(a[j]);
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