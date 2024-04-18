#include <bits/stdc++.h>
int LongestConsecutiveSequence(vector<int> a, int n)
{
  if (n == 0)
    return 0;

  int longest = 1;
  int cnt = 0;
  int smaller = INT_MIN;

  sort(a.begin(), a.end()); // important step

  for (int i = 0; i < n; i++)
  {
    if (a[i] - 1 == smaller)
    {
      cnt = cnt + 1;
      smaller = a[i];
    }
    else if (a[i] != smaller)
    {
      cnt = 1;
      smaller = a[i];
    }
    longest = max(longest, cnt);
  }
  return longest;
}
int main()
{
  vector<int> a = {100, 1, 1, 2, 3, 4, 101, 102, 2, 5, 6};
  int n = a.size();

  // longest consecutive sequence - 1,2,3,4,5,6
  // so, length of the above sequence is o/p --> 6

  int len = LongestConsecutiveSequence(a, n);
  cout << "\nLength of longest consecutive sequence in this array is " << len;
  return 0;
}