// Print all subsets

#include <bits/stdc++.h>
vector<vector<int>> Power_sub_sets(vector<int> &nums)
{
  vector<vector<int>> ans;

  int n = nums.size();

  int subsets = 1 << n;
  // 2^n is the number of possible subsets,
  // this includes one empty set too

  for (int mask = 0; mask < subsets; mask++)
  {
    vector<int> ls;

    for (int i = 0; i < n; i++)
    {
      if (mask & (1 << i))
        ls.push_back(nums[i]);
    }
    ans.push_back(ls);
  }
  return ans;
}

int main()
{
  vector<int> nums = {1, 2, 3};

  vector<vector<int>> ans = Power_sub_sets(nums);

  cout << "{ ";
  for (auto it : ans)
  {
    cout << "[";
    for (auto el : it)
    {
      cout << el;
    }
    cout << "]";
  }
  cout << " }";
  return 0;
}