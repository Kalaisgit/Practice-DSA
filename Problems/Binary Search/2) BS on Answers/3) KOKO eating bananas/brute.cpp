// TC --> O(N) linear approach, not binary search

#include <bits/stdc++.h>

int findMax(vector<int> &pileofbanana, int n)
{
  int maxi = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    maxi = max(maxi, pileofbanana[i]);
  }
  return maxi;
}
int Calculate_hourly_time(vector<int> &pileofbanana, int hour)
{
  int hourly_time = 0;
  int n = pileofbanana.size();
  for (int i = 0; i < n; i++)
  {
    hourly_time += ceil((double)pileofbanana[i] / (double)hour);
  }
  return hourly_time;
}

int Minimum_rate_taken_to_finish_bananas(vector<int> &pileofbanana, int h)
{

  int hourly_time = 0;
  int n = pileofbanana.size();
  int maxi = findMax(pileofbanana, n);

  for (int i = 1; i <= maxi; i++)
  {
    int hourly_time = Calculate_hourly_time(pileofbanana, i);
    if (hourly_time <= h)
      return i;
  }
  return -1;
}
int main()
{
  vector<int> pileofbanana = {3, 6, 7, 11};
  int h = 8; // max hour allowed to eat all bananas
  int hours = Minimum_rate_taken_to_finish_bananas(pileofbanana, h);
  cout << "\n Number of minimum bananas KOKO should eat is " << hours << " banana/hr to finish all piles of banana ";
  return 0;
}