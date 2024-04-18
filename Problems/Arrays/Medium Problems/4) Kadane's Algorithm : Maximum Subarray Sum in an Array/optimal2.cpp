
/*
    Time Complexity: O(N)
    Space Complexity: O(1)

    where N is the length of the array.
*/
#include <bits/stdc++.h>

int maxSubarraySum(vector<int> arr, int n)
{
  int maxSum = 0, Sum = 0;

  for (int i = 0; i < n; i++)
  {
    Sum = max(0, Sum + arr[i]);
    maxSum = max(maxSum, Sum);
  }

  return maxSum;
}
int main()
{
  vector<int> a = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  int n = a.size();
  int num = maxSubarraySum(a, n);
  cout << num;
  return 0;
}
