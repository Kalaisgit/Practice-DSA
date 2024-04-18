#include <bits/stdc++.h>
vector<vector<int>> Merge_overlapping_sub_intervals(vector<vector<int>> &a)
{
  int n = a.size(); // 5
  sort(a.begin(), a.end());
  vector<vector<int>> ans;

  for (int i = 0; i < n; i++)
  {
    int start = a[i][0]; // i =0; a[0][0] = 0
    int end = a[i][1];   // i =0; a[0][1] = 1

    if (!ans.empty() && end <= ans.back()[1])
    {
      continue;
    }
    /* to check if the next element is within the limit of element
    in the ans array stored before */

    for (int j = i + 1; j < n; j++)
    {
      if (a[j][0] <= end)
      {
        end = max(end, a[j][1]);
      }
      else
      {
        break;
      }
    }
    ans.push_back({start, end});
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