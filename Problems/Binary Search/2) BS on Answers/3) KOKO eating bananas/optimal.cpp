#include <bits/stdc++.h>
int FindMax(vector<int> &piles, int n)
{
  int maxi = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    maxi = max(maxi, piles[i]);
  }
  return maxi;
}

int calculate_hourly(vector<int> piles, int mid)
{
  double hourly = 0;
  for (int i = 0; i < piles.size(); i++)
  {
    hourly += ceil((double)piles[i] / mid);
  }
  // Check if hourly is within the range of int
  if (hourly > INT_MAX)
  {
    return INT_MAX; // Or handle overflow condition appropriately
  }
  else
  {
    return (int)hourly;
  }
}

int Minimum_rate_taken_to_finish_bananas(vector<int> &piles, int h)
{
  int n = piles.size();
  int low = 0;
  int high = FindMax(piles, n);
  while (low <= high)
  {
    int mid = (low + high) / 2;

    int hourly = calculate_hourly(piles, mid);

    if (hourly <= h)
    {
      high = mid - 1;
    }
    else
      low = mid + 1;
  }
  return low;
}
int main()
{
  vector<int> piles = {3, 6, 7, 11};
  int h = 8; // max hour allowed to eat all bananas
  int hours = Minimum_rate_taken_to_finish_bananas(piles, h);
  cout << "\n Number of minimum bananas KOKO should eat is " << hours << " banana/hr to finish all piles of banana ";
  return 0;
}