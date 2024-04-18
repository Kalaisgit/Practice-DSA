#include <bits/stdc++.h>

int main()
{
  int n, a;
  cin >> n;
  vector<int> vec;
  for (int i = 0; i < n; i++)
  {
    cin >> a;
    vec.push_back(a);
  }
  for (auto it : vec)
  {
    cout << it;
  }
}