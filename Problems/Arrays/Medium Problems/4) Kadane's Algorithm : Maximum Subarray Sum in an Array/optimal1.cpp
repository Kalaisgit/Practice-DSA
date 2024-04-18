// Printing subarray and sum
// Kadane's algol

#include <bits/stdc++.h>

void Maximum_Subarray_sum(vector<int> &a)
{
  int n = a.size();
  int sum = 0;
  int ansstart = -1;
  int ansend = -1;
  int start;
  int maxi = INT_MIN;
  {
    for (int i = 0; i < n; i++)
    {
      if (sum == 0)
      {
        start = i;
      }

      sum = sum + a[i];

      if (sum > maxi)
      {
        maxi = sum;

        ansstart = start;
        ansend = i;
      }

      if (sum < 0)
      {
        sum = 0;
      }
    }
  }

  cout << "[ ";
  for (int i = ansstart; i <= ansend; i++)
  {
    cout << a[i] << " ";
  }
  cout << " ]";
  cout << "\n"
       << maxi;
}
int main()
{
  vector<int> a = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  Maximum_Subarray_sum(a);

  return 0;
}
