#include <bits/stdc++.h>
int Find_Single_element(vector<int> &a, int n)
{
  if (a[0] != a[1])
    return a[0];
  if (a[n - 1] != a[n - 2])
    return a[n - 1];

  int low = 1;
  int high = n - 2;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (a[mid] != a[mid - 1] && a[mid] != a[mid + 1])
      return a[mid];

    if ((mid % 2 == 1 && a[mid] != a[mid - 1]) || (mid % 2 == 0 && a[mid] != a[mid + 1]))
    {
      // we are on the left side
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
  return -1;
}
int main()
{
  vector<int> a = {1, 1, 2, 2, 3, 4, 4, 5, 5};
  int n = a.size();
  int el = Find_Single_element(a, n);
  if (el == -1)
    cout << "\n There is no single element in array";
  else
    cout << "\n The element that occurs only once in this array is " << el;

  return 0;
}