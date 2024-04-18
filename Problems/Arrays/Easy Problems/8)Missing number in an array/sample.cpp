#include <bits/stdc++.h>

int missingNumber(vector<int> &nums)
{
  int n = nums.size();
  int N = n;
  int sum = (N * (N + 1)) / 2;
  int sum1 = 0;

  for (int i = 0; i < N; i++)
  {
    sum1 = sum1 + nums[i];
  }

  return (sum - sum1);
}
int main()
{
  vector<int> nums = {9, 7, 5, 6, 4, 2, 3, 1, 0};
  int a = missingNumber(nums);
  cout << a;
  return 0;
}