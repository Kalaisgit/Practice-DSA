#include <bits/stdc++.h>
vector<int> Find_repeating_missing(vector<int> &a)
{
  int n = a.size();
  vector<int> hash(n + 1, 0);
  int repeat = -1;
  int miss = -1;
  for (int i = 0; i < n; i++)
  {
    hash[a[i]]++;
  }
  for (int i = 1; i <= n; i++)
  {
    if (hash[i] == 2)
    {
      repeat = i;
    }
    if (hash[i] == 0)
    {
      miss = i;
    }
  }
  return {repeat, miss};
}

int main()
{
  vector<int> a = {3, 1, 2, 5, 3};
  vector<int> res = Find_repeating_missing(a);
  cout << "[";
  for (auto it : res)
  {
    cout << it << " ";
  }
  cout << "]";

  return 0;
}