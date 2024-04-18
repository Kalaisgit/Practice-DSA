// TC ---> O(N(log N)) + O(N)
// SC ----> S(N) --> cuz using a map

#include <bits/stdc++.h>
int Find_Number_occuring_morethan_n_by_2(vector<int> &a)
{
  map<int, int> mpp;
  int n = a.size();
  for (int i = 0; i < n; i++)
  {
    mpp[a[i]]++;
  }
  for (auto it : mpp)
  {
    if (it.second > n / 2)
    {
      return it.first;
    }
  }
  return -1;
}
int main()
{
  vector<int> a = {1, 2, 2, 3, 3, 4, 5, 5, 5, 5, 5, 5, 5, 5};
  int num = Find_Number_occuring_morethan_n_by_2(a);
  cout << num;
  return 0;
}
