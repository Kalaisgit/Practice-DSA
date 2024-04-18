// O(N^2)

#include <bits/stdc++.h>
int Find_Number_occuring_morethan_n_by_2(vector<int> &a)
{
  int n = a.size();
  for (int i = 0; i < n; i++)
  {
    int count = 0;
    for (int j = 0; j < n; j++)
    {
      if (a[i] == a[j])
      {
        count++;
      }
    }
    if (count > floor(n / 2))
    {
      return a[i];
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
