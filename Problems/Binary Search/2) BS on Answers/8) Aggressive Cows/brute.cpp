// O(N)
// no binary search

#include <bits/stdc++.h>
bool Number_of_cows_placed(vector<int> &arr, int total_cows, int n, int dist_range)
{
  int cnt_cows = 1;
  int last = arr[0];
  for (int i = 1; i < n; i++)
  {
    if (arr[i] - last >= dist_range)
    {
      cnt_cows += 1;
      last = arr[i];
    }
  }
  return (cnt_cows >= total_cows);
}
int aggressiveCows(vector<int> &stalls, int k)
{
  int n = stalls.size();

  sort(stalls.begin(), stalls.end());

  int limit = stalls[n - 1] - stalls[0];
  for (int i = 1; i <= limit; i++)
  {
    if (!Number_of_cows_placed(stalls, k, n, i))
      return (i - 1);
  }
  return -1;
}
int main()
{
  vector<int> stalls = {0, 3, 4, 7, 10, 9};
  int k = 4;
  int ans = aggressiveCows(stalls, k);
  cout << "The maximum possible minimum distance is: " << ans << "\n";
  return 0;
}