// using binary search
#include <bits/stdc++.h>

int Find_days_to_ship_capacity(vector<int> &weights, int n, int cap)
{
  int load = 0;
  int days = 1;
  for (int i = 0; i < n; i++)
  {
    if (load + weights[i] > cap)
    {
      days = days + 1;
      load = weights[i];
    }
    else
    {
      load += weights[i];
    }
  }
  return days;
}

int leastWeightCapacity(vector<int> &weights, int d)
{
  int n = weights.size();
  int min_cap = *max_element(weights.begin(), weights.end());
  int max_cap = accumulate(weights.begin(), weights.end(), 0);
  int low = min_cap;
  int high = max_cap;

  while (low <= high)
  {
    int mid = (low + high) / 2;

    if (Find_days_to_ship_capacity(weights, n, mid) <= d)
      high = mid - 1;
    else
      low = mid + 1;
  }

  return low;
}

int main()
{
  vector<int> weights = {5, 4, 5, 2, 3, 4, 5, 6};
  int d = 5;
  int ans = leastWeightCapacity(weights, d);
  cout << "The minimum capacity should be: " << ans << "\n";
  return 0;
}