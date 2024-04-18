#include <bits/stdc++.h>
int LongestConsecutiveSequence(vector<int> &a, int n)
{
  if (n == 0)
  {
    return 0;
  }
  unordered_set<int> st;
  int cnt = 1;
  int longest = 1;

  for (int i = 0; i < n; i++)
  {
    st.insert(a[i]);
  }

  for (auto it : st) // traversing the set
  {
    if (st.find(it - 1) == st.end()) // checking if there is no previous element.
    {
      cnt = 1;
      int x = it; // assign the element to x variable

      while (st.find(x + 1) != st.end()) // checking if the next element(x+1) is there in set.
      {
        x = x + 1;
        cnt = cnt + 1;
      }
    }
    longest = max(longest, cnt);
  }
  return longest;
}
int main()
{
  vector<int> a = {100, 1, 1, 2, 3, 4, 101, 102, 2, 5, 6, 7};
  int n = a.size();

  // longest consecutive sequence - 1,2,3,4,5,6,7
  // so, length of the above sequence is o/p --> 7

  int len = LongestConsecutiveSequence(a, n);
  cout << "\nLength of longest consecutive sequence in this array is " << len;
  return 0;
}