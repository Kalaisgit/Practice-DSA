// Dutch National Flag algol

#include <bits/stdc++.h>
vector<int> SortArray(vector<int> a)
{
  int n = a.size();
  int low = 0;
  int mid = 0;
  int high = n - 1;
  while (mid <= high) // as long as there is unsorted array
  {
    if (a[mid] == 0)
    {
      swap(a[mid], a[low]);
      mid++;
      low++;
    }
    else if (a[mid] == 1)
    {
      mid++;
    }
    else
    {
      swap(a[mid], a[high]);
      high--;
    }
  }
  return a;
}
int main()
{
  vector<int> a = {1, 0, 2, 0, 1, 1, 2, 2, 0, 1, 1, 1, 0, 0, 2};
  vector<int> b = SortArray(a);
  for (auto it : b)
  {
    cout << it << " ";
  }
  return 0;
}