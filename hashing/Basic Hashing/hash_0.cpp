#include <bits/stdc++.h>

int main()
{
  int n, x;
  vector<int> nums;
  cin >> n;
  cin >> x;
  countFrequency(n, x, nums);
  return 0;
}

vector<int> countFrequency(int n, int x, vector<int> &nums)
{
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int hash[x];
  hash[x] = {0};

  for (int i = 0; i < n; i++)
  {
    hash[arr[i]]++;
  }

  while (n--)
  {
    nums.push_back(hash[n]);
    return nums;
  }
}