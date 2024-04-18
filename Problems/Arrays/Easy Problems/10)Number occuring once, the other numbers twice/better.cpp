#include <bits/stdc++.h>
void Occur_once(vector<int> a)
{
  map<long long, int> mpp;
  int n = a.size();
  for (int i = 0; i < n; i++)
  {
    mpp[a[i]]++;
  }
  for (auto it : mpp)
  {
    if (it.second == 1)
    {
      cout << it.first;
    }
  }
}

int main()
{
  vector<int> a = {0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 6, 6};
  Occur_once(a);
  return 0;
}