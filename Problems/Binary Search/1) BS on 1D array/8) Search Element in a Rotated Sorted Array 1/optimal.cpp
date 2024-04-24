// No duplicates
#include <bits/stdc++.h>
int search(vector<int> &arr, int n, int k)
{
  int low = 0, high = n - 1;
  while (low <= high)
  {
    int mid = (low + high) / 2;

    // if mid points the target
    if (arr[mid] == k)
      return mid;

    // if left part is sorted:
    if (arr[low] <= arr[mid])
    {
      if (arr[low] <= k && k <= arr[mid])
      {
        // element exists:
        high = mid - 1;
      }
      else
      {
        // element does not exist:
        low = mid + 1;
      }
    }
    else
    { // if right part is sorted:
      if (arr[mid] <= k && k <= arr[high])
      {
        // element exists:
        low = mid + 1;
      }
      else
      {
        // element does not exist:
        high = mid - 1;
      }
    }
  }
  return -1;
}
int main()
{
  vector<int> a = {7, 8, 9, 1, 2, 3, 4, 5, 6};
  int n = a.size();
  int x;
  cout << "\n enter the element you want to search ";
  cin >> x;
  int index = search(a, n, x);
  cout << "\n Element is present at index " << index;
  return 0;
}