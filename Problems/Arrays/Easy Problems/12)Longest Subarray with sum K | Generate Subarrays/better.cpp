// optimal approach for array input with poisitive and negative numbers
// better approach for array input with positive numbers and 0s.
#include <bits/stdc++.h>

void Lengthof_LongestSubarray(vector<long long> a, long long k, long long n)
{
  long long sum = 0;

  int maxlen = 0;

  map<long long, int> presummap;

  for (int i = 0; i < n; i++)
  {
    sum = sum + a[i];

    if (sum == k)
    {
      maxlen = max(maxlen, i + 1);
    }

    long long rem = sum - k;
    if (presummap.find(rem) != presummap.end())
    {
      int len = i - presummap[rem];
      maxlen = max(maxlen, len);
    }
    if (presummap.find(sum) == presummap.end())
    {
      presummap[sum] = i;
    }
  }

  cout << "\n Length is " << maxlen;
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
