#include <bits/stdc++.h>

vector<int> majorityElement(vector<int> &a)
{
  unordered_map<int, int> mpp;

  vector<int> ans;

  int n = a.size();
  for (int i = 0; i < n; i++)
  {
    mpp[a[i]]++;
  }
  for (auto it : mpp)
  {
    if (it.second > n / 3)
    {
      ans.push_back(it.first);
    }
  }
  return ans;
}

int main()
{
  vector<int> a = {11, 33, 33, 11, 33, 11};
  vector<int> ans = majorityElement(a);
  cout << "The majority elements are: ";
  for (auto it : ans)
  {
    cout << it << " ";
  }
  return 0;
}
