#include <bits/stdc++.h>
double Find_Median(vector<int> &a, vector<int> &b)
{
  int n1 = a.size();
  int n2 = b.size();
  int n = n1 + n2;
  vector<int> c;
  int i = 0, j = 0;
  while (i < n1 && j < n2)
  {
    if (a[i] < b[j])
      c.push_back(a[i++]);
    else
      c.push_back(b[j++]);
  }
  while (i < n1)
    c.push_back(a[i++]);

  while (j < n2)
    c.push_back(b[j++]);

  if (n % 2 == 1)
  {
    return (double)c[n / 2];
  }

  double mid = (double)((double)(c[n / 2]) + (double)(c[n / 2 - 1])) / 2.0;
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