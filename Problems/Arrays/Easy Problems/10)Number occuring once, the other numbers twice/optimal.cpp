#include <bits/stdc++.h>
void Occur_once(vector<int> a)
{
  int n = a.size();
  int XOR = 0;
  for (int i = 0; i < n; i++)
  {
    XOR = XOR ^ a[i];
  }
  cout << XOR;
}

int main()
{
  vector<int> a = {1, 1, 2, 2, 4, 4, 3, 3, 5, 9, 9};
  Occur_once(a);
  return 0;
}