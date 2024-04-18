// Optimal _ Sum

#include <bits/stdc++.h>
void MissingNumber(vector<int> &a, int n, int sum)
{
  int sum1 = 0;
  for (int i = 0; i < n - 1; i++)
  {
    sum1 = sum1 + a[i];
  }

  cout << "\n"
       << sum1;
  cout << "\nMissing Number is "
       << sum - sum1;
}
int main()
{
  vector<int> a = {1, 2, 3, 5};
  int n = 5;
  int sum;
  sum = (n * (n + 1)) / 2;
  cout << sum << endl;
  MissingNumber(a, n, sum);
  return 0;
}