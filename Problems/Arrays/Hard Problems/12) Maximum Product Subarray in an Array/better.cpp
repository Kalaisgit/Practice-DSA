#include <bits/stdc++.h>
int Maximum_product_subarray_can_offer(vector<int> &a)
{
  int n = a.size();
  int product;
  int maxi = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    product = 1;
    for (int j = i; j < n; j++)
    {
      product = product * a[j];
      maxi = max(maxi, product);
    }
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