// not using binary search

#include <bits/stdc++.h>
int Find_days_for_cap(vector<int> &weights, int cap)
{
  int load = 0;
  int days = 1;
  for (int i = 0; i < weights.size(); i++)
  {

    if (load += weights[i] > cap)
    {
      days += 1;
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

  for (int cap = min_cap; cap <= max_cap; cap++)
  {
    if (Find_days_for_cap(weights, cap) <= d)
      return cap;
  }
  return -1;
}
int main()
{
  vector<int> weights = {5, 4, 5, 2, 3, 4, 5, 6};
  int d = 5;
  int ans = leastWeightCapacity(weights, d);
  cout << "The minimum capacity should be: " << ans << "\n";
  return 0;
}