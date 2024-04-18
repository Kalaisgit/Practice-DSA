#include <bits/stdc++.h>
int Count_of_subarrays_with_XOR_k(vector<int> &a, int n, int k)
{
  int XOR;
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      XOR = 0;
      for (int l = i; l <= j; l++)
      {
        XOR = XOR ^ a[l];
      }
      if (XOR == k)
      {
        count++;
      }
    }
  }
  return count;
}
int main()
{
  vector<int> a = {4, 2, 2, 6, 4};
  int n = a.size();
  int k;
  cout << "\n enter k ";
  cin >> k;
  int res = Count_of_subarrays_with_XOR_k(a, n, k);
  cout << "\nCount_of_subarrays_with_XOR_k is " << res;
  return 0;
}