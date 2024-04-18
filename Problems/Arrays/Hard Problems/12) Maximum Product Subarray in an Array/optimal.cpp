#include <bits/stdc++.h>
int Maximum_product_subarray_can_offer(vector<int> &a)
{
  int maxi = INT_MIN;
  int n = a.size();
  int prefix = 1;
  int suffix = 1;
  for (int i = 0; i < n; i++)
  {
    if (prefix == 0)
    {
      prefix = 1;
    }
    if (suffix == 0)
    {
      suffix = 1;
    }
    prefix *= a[i];
    suffix *= a[n - i - 1];
    maxi = max(maxi, max(prefix, suffix));
  }

  return maxi;
}

int main()
{
  vector<int> a = {2, 3, -4, 1};
  int ans = Maximum_product_subarray_can_offer(a);
  cout << "\nMaximum_product_subarray_can_offer is " << ans << endl;
  return 0;
}