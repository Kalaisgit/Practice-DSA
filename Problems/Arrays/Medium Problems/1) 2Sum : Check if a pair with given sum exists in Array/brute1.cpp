#include <bits/stdc++.h>
void Pairexist(vector<int> &a, int n, int target)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (a[i] + a[j] == target)
      {
        cout << "\n Pair present";
        cout << "\n Indices of numbers that constitute a target sum of " << target << " are [ " << i << " , " << j << " ]";
        return;
      }
      else
        cout << "\n Pair not present";
      return;
    }
  }
}
int main()
{
  vector<int> a;
  int target;
  cout << "\n enter target ";
  cin >> target;
  int n;
  cout << "\n enter size of array ";
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int e;
    cout << "\n enter array input ";
    cin >> e;
    a.push_back(e);
  }
  Pairexist(a, n, target);
  return 0;
}