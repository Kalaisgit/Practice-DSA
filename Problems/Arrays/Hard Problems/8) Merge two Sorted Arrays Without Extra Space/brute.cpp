/*
Example 1:
Input:

n = 4, arr1[] = [1 4 8 10]
m = 5, arr2[] = [2 3 9]

Output:

arr1[] = [1 2 3 4]
arr2[] = [8 9 10]
*/

#include <bits/stdc++.h>
void Merge_two_sorted_arrays(vector<int> &a, vector<int> &b)
{
  int n = a.size();
  int m = b.size();
  int len = n + m;
  int p1 = 0;
  int p2 = 0;
  int c[n + m];
  int index = 0;
  while (p1 < n && p2 < m)
  {
    if (a[p1] <= b[p2])
    {
      c[index] = a[p1];
      index++;
      p1++;
    }
    else
    {
      c[index] = b[p2];
      index++;
      p2++;
    }
  }
  while (p1 < n)
  {
    c[index++] = a[p1++];
  }
  while (p2 < m)
  {
    c[index++] = b[p2++];
  }
  for (int i = 0; i < len; i++)
  {
    if (i < n)
    {
      a[i] = c[i];
    }
    else
    {
      b[i - n] = c[i];
    }
  }
  cout << "\n A:";
  for (auto it : a)
  {

    cout << it << " ";
  }
  cout << "\n B:";
  for (auto it : b)
  {

    cout << it << " ";
  }
}

int main()
{
  vector<int> a = {1, 4, 8, 10};
  vector<int> b = {2, 3, 9};
  Merge_two_sorted_arrays(a, b);
  return 0;
}