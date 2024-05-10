// using binary search

#include <bits/stdc++.h>

bool sum_within_threshold(vector<int> &arr, int mid, int limit)
{
  int sum = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    sum += ceil((double)arr[i] / (double)mid);
  }

  return (sum <= limit);
}

int smallestDivisor(vector<int> &arr, int limit)
{
  int n = arr.size();
  if (n > limit)
    return -1;
  int low = 1;
  int high = *max_element(arr.begin(), arr.end());

  while (low <= high)
  {
    int mid = (low + high) / 2;

    if (sum_within_threshold(arr, mid, limit))
      high = mid - 1;
    else
      low = mid + 1;
  }
  return low;
}

int main()
{
  vector<int> arr = {1, 2, 3, 4, 5};
  int limit = 8;
  int ans = smallestDivisor(arr, limit);
  cout << "The minimum divisor is: " << ans << "\n";
  return 0;
}
