/*
Example 1:
Input Format
: N = 5, array[] = {5,3,2,1,4}
Result
: 7
Explanation
: There are 7 pairs (5,1), (5,3), (5,2), (5,4),(3,2), (3,1), (2,1) and we have left 2 pairs (2,4) and (1,4) as both are not satisfy our condition.

Practice:
Solve Problem

*/
#include <bits/stdc++.h>
int Count_inversions(vector<int> &a)
{
  int n = a.size();
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (a[i] > a[j])
      {
        count++;
      }
    }
  }
  return count;
}
int main()
{
  vector<int> a = {5, 3, 2, 1, 4};
  vector<int> b = {1, 2, 3, 4, 5};
  int ans = Count_inversions(a);
  cout << "\n count of inverted pairs in this array " << ans;
  int res = Count_inversions(b);
  cout << "\n count of inverted pairs in this array " << res;
  return 0;
}