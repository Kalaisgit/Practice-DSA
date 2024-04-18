// Union of Two Sorted arrays

#include <bits/stdc++.h>

void Array_union(vector<int> a, vector<int> b)
{
  int n1 = a.size();
  int n2 = b.size();
  vector<int> temp;
  int i = 0;
  int j = 0;
  while (i < n1 && j < n2)
  {
    if (a[i] <= b[j])
    {
      if (temp.size() == 0 || temp.back() != a[i])
      {
        temp.push_back(a[i]);
      }
      i++;
    }
    else if (b[j] <= a[i])
    {
      if (temp.size() == 0 || temp.back() != b[j])
      {
        temp.push_back(b[j]);
      }
      j++;
    }
  }
  while (i < n1)
  {
    if (temp.size() == 0 || temp.back() != a[i])
    {
      temp.push_back(a[i]);
    }
    i++;
  }
  while (j < n2)
  {
    if (temp.size() == 0 || temp.back() != b[j])
    {
      temp.push_back(b[j]);
    }
    j++;
  }

  for (auto it : temp)
  {
    cout << it << " ";
  }
}
int main()
{
  vector<int> a = {1, 2, 5, 6};
  vector<int> b = {1, 1, 3, 4, 5, 6};
  // input array has to be sorted
  Array_union(a, b);
  return 0;
}