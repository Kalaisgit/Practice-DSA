/*Example 1:
Input Format
:  array[] = {3,1,2,5,3}
Result
: {3,4)
Explanation
: A = 3 , B = 4
Since 3 is appearing twice and 4 is missing
*/

#include <bits/stdc++.h>
vector<int> Find_repeating_missing(vector<int> &a)
{
  int n = a.size(); // size of the array
  int repeating = -1, missing = -1;

  // Find the repeating and missing number:
  for (int i = 1; i <= n; i++)
  {
    // Count the occurrences:
    int cnt = 0;
    for (int j = 0; j < n; j++)
    {
      if (a[j] == i)
        cnt++;
    }

    if (cnt == 2)
      repeating = i;
    else if (cnt == 0)
      missing = i;

    if (repeating != -1 && missing != -1)
      break;
  }
  return {repeating, missing};
}

int main()
{
  vector<int> a = {3, 1, 2, 5, 3};
  vector<int> res = Find_repeating_missing(a);
  cout << "[";
  for (auto it : res)
  {
    cout << it << " ";
  }
  cout << "]";

  return 0;
}