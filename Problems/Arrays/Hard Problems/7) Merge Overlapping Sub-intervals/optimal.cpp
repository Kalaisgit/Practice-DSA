#include <bits/stdc++.h>
vector<vector<int>> Merge_overlapping_sub_intervals(vector<vector<int>> &a)
{
  int n = a.size();
  vector<vector<int>> ans;
  for (int i = 0; i < n; i++)
  {

    if (ans.empty() || a[i][0] > ans.back()[1])
    {
      ans.push_back(a[i]);
    }
    else
    {
      ans.back()[1] = max(ans.back()[i], a[i][1]);
    }
  }
  return ans;
}
int main()
{
  vector<vector<int>> a = {{0, 1}, {0, 3}, {1, 4}, {6, 8}, {7, 10}};
  vector<vector<int>> ans = Merge_overlapping_sub_intervals(a);
  cout << "The merged intervals are: "
       << "\n";
  for (auto it : ans)
  {
    cout << "[" << it[0] << ", " << it[1] << "] ";
  }
  cout << endl;
  return 0;
}
