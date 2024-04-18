// TC --> O(N^3)

#include <bits/stdc++.h>
int Maximum_Subarray_sum(vector<int> &a)
{
  int n = a.size();
  int sum;
  int maxi = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      sum = 0;
      for (int k = i; k <= j; k++)
      {
        sum = sum + a[k];
      }
      maxi = max(maxi, sum);
    }
  }
  return maxi;
}

int main()
{
  vector<int> a = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  int num = Maximum_Subarray_sum(a);
  cout << num;
  return 0;
}
