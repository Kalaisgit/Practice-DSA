#include <bits/stdc++.h>
int Count_of_subarrays_with_XOR_k(vector<int> &a, int n, int k)
{
  int XR = 0;
  map<int, int> mpp;
  int count = 0;
  mpp[XR]++;
  for (int i = 0; i < n; i++)
  {
    int XR = XR ^ a[i];

    int x = k ^ XR;

    count += mpp[x];

    mpp[XR]++;
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