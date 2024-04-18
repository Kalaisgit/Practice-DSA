#include <bits/stdc++.h>
vector<vector<int>> Return_unique_triplets_equals_to_0(vector<int> &a)
{
  int n = a.size();
  vector<vector<int>> ans;
  sort(a.begin(), a.end());

  for (int i = 0; i < n; i++)
  {
    if (i > 0 && a[i] == a[i - 1])
      continue; // doesnt execute statements below and continues with above for loop

    int j = i + 1;
    int k = n - 1;
    while (j < k)
    {
      int sum = a[i] + a[j] + a[k];

      if (sum < 0)
      {
        j++;
      }
      else if (sum > 0)
      {
        k--;
      }
      else
      {
        vector<int> temp = {a[i], a[j], a[k]};
        ans.push_back(temp);
        j++;
        k--;
        while (j < k && a[j] == a[j - 1])
          j++;
        while (j < k && a[k] == a[k + 1])
          k--;
      }
    }
  }
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