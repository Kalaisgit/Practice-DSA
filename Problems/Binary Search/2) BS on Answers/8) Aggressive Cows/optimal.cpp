#include <bits/stdc++.h>
bool Cows_placed(vector<int> &arr, int dist, int total_cows, int n)
{
  int cows = 1;
  int last_placed = arr[0];
  for (int i = 1; i < n; i++)
  {
    if (arr[i] - last_placed >= dist)
    {
      cows += 1;
      last_placed = arr[i];
    }
  }
  return (cows >= total_cows);
}
int aggressiveCows(vector<int> &stalls, int k)
{
  int n = stalls.size();
  sort(stalls.begin(), stalls.end());
  int low = 1;
  int high = stalls[n - 1] - stalls[0];
  while (low <= high)
  {
    int mid = (low + high) / 2;

    if (Cows_placed(stalls, mid, k, n))
      low = mid + 1;
    else
      high = mid - 1;
  }
  return high;
}
int main()
{
  vector<int> stalls = {0, 3, 4, 7, 10, 9};
  int k = 4;
  int ans = aggressiveCows(stalls, k);
  cout << "The maximum possible minimum distance is: " << ans << "\n";
  return 0;
}