#include <bits/stdc++.h>
int Find_kth(vector<int> &a, vector<int> &b, int k)
{
  int n1 = a.size();
  int n2 = b.size();

  if (n1 > n2)
    return Find_kth(b, a, k);

  int n = n1 + n2;

  int left = k;

  int low = max(0, k - n2);
  int high = min(k, n1);

  while (low <= high)
  {
    int mid1 = low + (high - low) / 2;
    int mid2 = left - mid1;

    int l1 = (mid1 == 0) ? INT_MIN : a[mid1 - 1];
    int r1 = (mid1 == n1) ? INT_MAX : a[mid1];
    int l2 = (mid2 == 0) ? INT_MIN : b[mid2 - 1];
    int r2 = (mid2 == n2) ? INT_MAX : b[mid2];

    if (l1 <= r2 && l2 <= r1)
    {
      return max(l1, l2);
    }
    else if (l1 > r2)
    {
      high = mid1 - 1;
    }
    else
    {
      low = mid1 + 1;
    }
  }

  return 0;
}
int main()
{
  vector<int> a = {1, 2, 3, 3, 3, 5};
  vector<int> b = {2, 4, 5, 6, 7, 8};

  //  {1,2,2,3,3,3,4,5,5,6,7,8}
  int k = 10;
  // o/p = 3

  int kth = Find_kth(a, b, k);
  cout << "\n The " << k << "th element of a and b is " << kth;
  return 0;
}