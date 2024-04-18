// Length of the longest sub array
// Brute - Time complexity - O(n^3)

#include <bits/stdc++.h>

void Lengthof_LongestSubarray(long long a[], long long k, long long n)
{
  long long len = 0;
  for (long long i = 0; i < n; i++)
  {
    for (long long j = 0; j < n; j++)
    {
      long long sum = 0;
      for (long long o = i; o <= j; o++)
      {
        sum = sum + a[o];
      }
      if (sum == k)
      {
        len = max(len, j - i + 1);
      }
    }
  }
  cout << "\n Length of longest subarray that equals to sum of " << k << " is " << len;
}
int main()
{
  long long n;
  cout << "\n enter array size ";
  cin >> n;
  long long a[n];
  for (long long i = 0; i < n; i++)
  {
    cout << "\n array input ";
    cin >> a[i];
  }

  long long k;
  cout << "\n enter k ";
  cin >> k;
  Lengthof_LongestSubarray(a, k, n);

  return 0;
}
