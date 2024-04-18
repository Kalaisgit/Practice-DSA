// bruteforce

#include <bits/stdc++.h>
void rightrotate(vector<int> &a, int n, int k)
{
  int d = k % n;
  vector<int> temp;
  for (int i = n - d; i < n; i++)
  {
    temp.push_back(a[i]);
  }
  for (int i = 0; i < d; i++)
  {
    a[d + i] = a[i];
  }
  for (int i = 0; i < d; i++)
  {
    a[i] = temp[i];
  }
  for (auto it : a)
  {
    cout << it << " ";
  }
}
int main()
{
  int n;
  cin >> n;
  vector<int> a;
  for (int i = 0; i < n; i++)
  {
    int element;
    cin >> element;
    a.push_back(element);
  }
  int k;
  cin >> k;

  rightrotate(a, n, k);
  return 0;
}