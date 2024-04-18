#include <bits/stdc++.h>
int Length_of_Longest_subarray_with_sum_0(vector<int> &a, int n)
{
  int sum;
  int maxi = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    sum = 0;
    for (int j = i; j < n; j++)
    {
      sum += a[j];
      if (sum == 0)
      {
        int len1 = j - i + 1;
        maxi = max(len1, maxi);
      }
    }
  }
  return maxi;
}
int main()
{
  vector<int> a = {4, 1, 9, -2, 1, 5, -5, 0};
  int n = a.size();
  int res = Length_of_Longest_subarray_with_sum_0(a, n);
  cout << "\nLength_of_Longest_subarray_with_sum_0 is " << res;
  return 0;
}