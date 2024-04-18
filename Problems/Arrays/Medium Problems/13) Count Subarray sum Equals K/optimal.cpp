// Problem Statement: Given an array of integers and an integer k, return the total number of subarrays whose sum equals k.

#include <bits/stdc++.h>
int Number_of_subarrays_with_sum_k(vector<int> &a, int k)
{
  int n = a.size();
  int occur = 0;
  map<int, int> mpp;
  int presum = 0;
  mpp[0] = 1; // 0 occurs 1 time in map
  int cnt = 0;

  for (int i = 0; i < n; i++)
  {
    presum = presum + a[i];

    int rem = presum - k;

    cnt = cnt + mpp[rem];

    mpp[presum] = mpp[presum] + 1;
  }
  return cnt;
}

int main()
{
  vector<int> a = {1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
  int k = 3;
  int num = Number_of_subarrays_with_sum_k(a, k);
  cout << num;
  return 0;
  // op - 8
}
