#include <bits/stdc++.h>
int Find_flips(int start, int goal)
{
  int res = start ^ goal;
  int cnt = 0;
  while (res != 0)
  {
    res = res & (res - 1);
    cnt = cnt + 1;
  }
  return cnt;
}
int main()
{
  int start = 10;
  int goal = 7;

  int n = Find_flips(start, goal);
  cout << "the flips taken " << n;
  return 0;
}