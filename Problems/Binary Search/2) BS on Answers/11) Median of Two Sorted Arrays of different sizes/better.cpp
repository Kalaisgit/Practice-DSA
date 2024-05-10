#include <bits/stdc++.h>
double Find_Median(vector<int> &a, vector<int> &b)
{
  int ind1 = -1;
  int ind2 = -1;

  int cnt = 0;
  int n1 = a.size();
  int n2 = b.size();
  int n = n1 + n2;
  int i = 0, j = 0;
  while (i < n1 && j < n2)
  {
    if (a[i] < b[j])
    {
      if (cnt == (n / 2 - 1))
        ind1 = a[i];

      if (cnt == n / 2)
        ind2 = a[i];

      cnt++;
      i++;
    }
    else
    {
      if (cnt == (n / 2 - 1))
        ind1 = b[j];
      if (cnt == n / 2)
        ind2 = b[j];

      cnt++;
      j++;
    }
  }
  while (i < n1)
  {
    if (cnt == (n / 2 - 1))
      ind1 = a[i];

    if (cnt == n / 2)
      ind2 = a[i];

    cnt++;
    i++;
  }
  while (j < n2)
  {
    if (cnt == (n / 2 - 1))
      ind1 = b[j];
    if (cnt == n / 2)
      ind2 = b[j];

    cnt++;
    j++;
  }

  if (n % 2 == 1)
    return ind2;

  double mid = ((double)ind1 + (double)ind2) / 2.0;
  return mid;
}
int main()
{
  vector<int> a = {1, 2, 3, 3, 3, 5};
  vector<int> b = {2, 4, 5, 6, 7, 8};

  // c = {1,2,2,3,3,3,4,5,5,6,7,8}

  double median = Find_Median(a, b);
  cout << "\n The median of a and b is " << median;
  return 0;
}