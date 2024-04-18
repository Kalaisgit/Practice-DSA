// Kadane's Algol
// O(N)--> TC
// O(1)--> SC
#include <bits/stdc++.h>
int Maximum_Subarray_sum(vector<int> &a)
{
  int n = a.size();
  int maxi = INT_MIN;
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum = sum + a[i];
    maxi = max(sum, maxi);
    if (sum < 0)
    {
      sum = 0;
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
