// not using binary search
// TC--> O(N)

#include <bits/stdc++.h>
int Find_missing(vector<int> &a, int k)
{
  int n = a.size();
  for (int i = 0; i < n; i++)
  {
    if (a[i] <= k)
      k++;
    else
      break;
  }
  return k;
}

int main()
{
  vector<int> a = {2, 3, 4, 7, 11};
  int k = 5;
  int kth_missing_number = Find_missing(a, k);
  cout << "\n The kth missing positive number in an array is " << kth_missing_number;
}