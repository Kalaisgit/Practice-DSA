#include <bits/stdc++.h>
int Upper_bound(vector<int> &a, int n, int x)
{
  int ans = upper_bound(a.begin(), a.end(), x) - a.begin(); // inbuilt stl

  return ans;
}
int main()
{
  vector<int> a = {1, 2, 3, 4, 6, 7, 9};
  int n = a.size();
  int x;
  cout << "\n enter x ";
  cin >> x;
  int ans = Upper_bound(a, n, x);
  cout << "\n Lower bound present at index " << ans;
  return 0;
}