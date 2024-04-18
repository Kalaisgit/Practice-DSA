// optimal approach only for array input with positive numbers and zeroes

#include <bits/stdc++.h>
void Lengthof_LongestSubarray(vector<long long> a, long long k, long long n)
{
  long long sum = a[0];
  int maxlen = 0;
  int right = 0;
  int left = 0;
  while (left <= right && right < n)
  {
    if (sum > k)
    {
      sum = sum - a[left];
      left++;
    }
    if (sum == k)
    {
      maxlen = max(maxlen, right - left + 1);
    }

    right++;
    if (right < n)
    {
      sum = sum + a[right];
    }
  }
  cout << maxlen;
}
int main()
{
  long long n;
  cout << "\n enter array size ";
  cin >> n;
  vector<long long> a;
  for (long long i = 0; i < n; i++)
  {
    long long e;
    cout << "\n array input ";
    cin >> e;
    a.push_back(e);
  }

  long long k;
  cout << "\n enter k ";
  cin >> k;
  Lengthof_LongestSubarray(a, k, n);

  return 0;
}
