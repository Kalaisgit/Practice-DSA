// Problem Statement: Given an array of integers and an integer k, return the total number of subarrays whose sum equals k.

#include <bits/stdc++.h>
int Number_of_subarrays_with_sum_k(vector<int> &a, int k)
{
  int n = a.size();
  int occur = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      int sum = 0;
      for (int k = i; k <= j; k++)
      {
        sum = sum + a[k];
      }
      if (sum == k)
      {
        occur++;
      }
    }
  }
  return occur;
}
int main()
{
  vector<int> a = {3, 1, 2, 4};
  int k = 6;
  int num = Number_of_subarrays_with_sum_k(a, k);
  cout << num;
  return 0;
}
