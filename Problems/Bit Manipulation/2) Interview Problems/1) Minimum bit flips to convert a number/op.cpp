// TC->O(log base 2 (start^goal))

#include <bits/stdc++.h>
int Flip_to_make_goal(int start, int goal)
{
  int ans = start ^ goal;
  int cnt = 0;

  while (ans != 0)
  {

    if ((ans & 1) == 1)
      cnt++;

    ans = ans >> 1; // divide by 2 , (ans / (2^1))
  }

  return cnt;
}
int main()
{
  int start = 7;
  int goal = 10;

  int flips = Flip_to_make_goal(start, goal);

  cout << "\n the flips required to change start to goal is " << flips;

  return 0;
}