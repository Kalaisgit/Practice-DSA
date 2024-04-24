#include <bits/stdc++.h>
int Recursive_Binary_search(vector<int> &a, int low, int high, int target)
{
  if (low > high) // base case is when there is no search space, function stops
  {
    return -1;
  }

  int mid = (low + high) / 2;
  if (a[mid] == target)
    return mid;
  else if (a[mid] < target)
    return Recursive_Binary_search(a, mid + 1, high, target);

  return Recursive_Binary_search(a, low, mid - 1, target);
}
int main()
{
  vector<int> a = {1, 2, 4, 5, 6, 7, 8, 9};
  int n = a.size();
  int target;
  cout << "\n enter the value you wanna search ";
  cin >> target;
  int low = 0;
  int high = n - 1;
  int index = Recursive_Binary_search(a, low, high, target);
  cout << "\n The target element is present in index " << index;
  return 0;
}