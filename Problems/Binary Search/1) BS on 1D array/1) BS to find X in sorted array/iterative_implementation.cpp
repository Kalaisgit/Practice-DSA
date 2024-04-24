#include <bits/stdc++.h>
int Iterative_Binary_search(vector<int> &a, int n, int target)
{
  int low = 0;
  int high = n - 1;

  while (low <= high) // as long as there is search space
  {
    int mid = (low + high) / 2;
    if (a[mid] == target)
    {
      return mid;
    }
    else if (target > a[mid])
    {
      low = mid + 1;
    }
    else // target<a[mid]
    {
      high = mid - 1;
    }
  }
  return -1;
}
int main()
{
  vector<int> a = {1, 2, 4, 5, 6, 7, 8, 9};
  int n = a.size();
  int target;
  cout << "\n enter the value you wanna search ";
  cin >> target;
  int index = Iterative_Binary_search(a, n, target);
  cout << "\n The target element is present in index " << index;
  return 0;
}