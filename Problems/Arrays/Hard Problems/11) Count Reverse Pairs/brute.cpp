/*
Example 1:
Input:
 N = 5, array[] = {1,3,2,3,1)

Output
: 2

Explanation:
 The pairs are (3, 1) and (3, 1) as from both the pairs the condition arr[i] > 2*arr[j] is satisfied.

Example 2:
Input:
 N = 4, array[] = {3,2,1,4}

Output:
 1

Explaination:
There is only 1 pair  ( 3 , 1 ) that satisfy the condition arr[i] > 2*arr[j]
*/
#include <bits/stdc++.h>
using namespace std;

int count_reverse_pairs(vector<int> &a)
{

  // Count the number of pairs:
  int cnt = 0;
  int n = a.size();
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (a[i] > 2 * a[j])
        cnt++;
    }
  }
  return cnt;
}

int main()
{
  vector<int> a = {4, 1, 2, 3, 1};
  vector<int> b = {1, 3, 2, 3, 1};
  int n = 5;
  int cnt = count_reverse_pairs(a);
  cout << "The number of reverse pair is: "
       << cnt << endl;

  int res = count_reverse_pairs(b);
  cout << "The number of reverse pair is: "
       << res << endl;
  return 0;
}
