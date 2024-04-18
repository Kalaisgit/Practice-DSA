// tc --> O(N^2)

#include <bits/stdc++.h>

using namespace std;

int Maximum_Subarray_sum(vector<int> &a)
{
  int n = a.size();
  int maxi = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    int sum = 0; // Initialize sum to 0 for each subarray
    for (int j = i; j < n; j++)
    {
      sum = sum + a[j];
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
