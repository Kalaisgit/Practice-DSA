// find a number that ocuurs odd number of times in a array
// only once
// tc->O(N)

#include <bits/stdc++.h>
int Find_num_ocurring_odd_or_one_time(vector<int> &num)
{
  int ans = 0;

  for (auto it : num)
  {
    ans = ans ^ it;
  }
  return ans;
}
int main()
{

  vector<int> num = {1, 1, 2, 2, 3, 4, 4, 5, 5};

  int ans = Find_num_ocurring_odd_or_one_time(num);

  cout << "\n the number that occurs once or odd number of times " << ans;

  return 0;
}