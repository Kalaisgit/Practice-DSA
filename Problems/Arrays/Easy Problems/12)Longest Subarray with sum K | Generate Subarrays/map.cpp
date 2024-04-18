#include <bits/stdc++.h>

int main()
{
  map<int, int> mpp;
  vector<int> v = {1, 2, 2, 1, 1};
  for (int i = 0; i < v.size(); i++)
  {
    mpp[v[i]]++;
  }
  for (auto it : mpp)
  {
    cout << it.first << "--->" << it.second << endl;
  }
  int x = 1;
  auto it = mpp.find(x);
  if (it != mpp.end())
    cout << "\n found" << it->first << "--->" << it->second;
  else
    cout << "\n notfound";
  return 0;
}