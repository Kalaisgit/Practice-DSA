#include <bits/stdc++.h>
vector<int> Find_repeating_missing(vector<int> &a)
{
  long long n = a.size();
  long long Sn = (n * (n + 1)) / 2;
  long long Sn2 = (n * (n + 1) * (2 * n + 1)) / 6;
  long long Sna = 0;
  long long Sn2a = 0;
  for (long long i = 0; i < n; i++)
  {
    Sna = Sna + (long long)a[i];
    Sn2a = Sn2a + ((long long)a[i] * (long long)a[i]);
  }
  long long val1 = Sn - Sna;   // x-y
  long long val2 = Sn2 - Sn2a; // x^2 - y^2 = (x+y)(x-y)
  val2 = val2 / val1;          // x+y
  long long x = (val1 + val2) / 2;
  long long y = x - val1;

  return {(int)x, (int)y};
}

int main()
{
  vector<int> a = {3, 1, 2, 5, 3};
  vector<int> res = Find_repeating_missing(a);
  cout << "[ ";
  for (auto it : res)
  {
    cout << it << " ";
  }
  cout << "]";

  return 0;
}