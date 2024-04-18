#include <bits/stdc++.h>
int Length_of_Longest_subarray_with_sum_0(vector<int> &a, int n)
{
  map<int, int> mpp;
  int maxi = 0;
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum = sum + a[i];
    if (sum == 0)
    {
      maxi = max(maxi, i + 1);
      if (mpp.find(sum) != mpp.end())
      {
        maxi = max(maxi, i - mpp[sum]);
      }
      else
      {
        mpp[sum] = i;
      }
    }
  }
  return maxi;
}
int main()
{
  vector<int> a = {1, -1, 2, 4, -3, -1, -2, 9};
  int n = a.size();
  int res = Length_of_Longest_subarray_with_sum_0(a, n);
  cout << "\nLength_of_Longest_subarray_with_sum_0 is " << res;
  return 0;
}