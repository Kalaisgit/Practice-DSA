// Find the two numbers appearing odd number of times
// tc -> O(2N)

#include <bits/stdc++.h>

pair<long, long> Find_Single_numbers(vector<int> &nums)
{
  long XORR = 0;
  long n = nums.size();
  long b1 = 0;
  long b2 = 0;

  for (long i = 0; i < n; i++)
  {
    XORR = XORR ^ nums[i];
  }

  long rightmost = (XORR & (XORR - 1)) ^ XORR;

  for (long i = 0; i < n; i++)
  {
    if (nums[i] & rightmost)
      b1 = b1 ^ nums[i];
    else
      b2 = b2 ^ nums[i];
  }

  return {b1, b2};
}

int main()
{
  vector<int> nums = {1, 1, 2, 2, 4, 3, 3, 5, 5, 7};

  pair<long, long> ans = Find_Single_numbers(nums);

  cout << "\n the single numbers are {" << ans.first << "," << ans.second << "}";

  return 0;
}