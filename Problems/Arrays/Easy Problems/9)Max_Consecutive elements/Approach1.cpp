#include <bits/stdc++.h>
void Max_Consecutive(vector<int> a)
{
  int n = a.size();
  int maxi = 0;
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] == 1)
    {
      count++;
      maxi = max(count, maxi);
    }
    else
    {
      count = 0;
    }
  }
  cout << maxi;
}

int main()
{
  vector<int> a = {1, 1, 0, 1, 1, 1, 1, 0, 1, 1};
  Max_Consecutive(a);
  return 0;
}