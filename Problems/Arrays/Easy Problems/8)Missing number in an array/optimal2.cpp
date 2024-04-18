// Optimal - XOR method
#include <bits/stdc++.h>
void MissingNumber(vector<int> &a, int N)
{
  int XOR1 = 0;
  int XOR2 = 0;
  int n = N - 1;
  for (int i = 0; i < n; i++)
  {
    XOR2 = XOR2 ^ a[i];
    XOR1 = XOR1 ^ (i + 1);
  }
  XOR1 = XOR1 ^ N;
  cout << (XOR1 ^ XOR2);
}
int main()
{
  vector<int> a = {1, 2, 3, 5};
  int N = 5;
  MissingNumber(a, N);
  return 0;
}