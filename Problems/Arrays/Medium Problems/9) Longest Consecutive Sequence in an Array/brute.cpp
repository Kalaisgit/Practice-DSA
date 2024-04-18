#include <bits/stdc++.h>
bool linear_search(vector<int> &a, int num)
{
  int n = a.size();
  for (int i = 0; i < n; i++)
  {
    if (a[i] == num)
      return true;
  }
  return false;
}

int LongestConsecutiveSequence(vector<int> &a, int n)
{
  int x;
  int cnt;
  int longest = 1;
  for (int i = 0; i < n; i++)
  {
    x = a[i];
    cnt = 1;

    while (linear_search(a, x + 1) == true)
    {
      x = x + 1;
      cnt++;
      longest = max(longest, cnt);
    }
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