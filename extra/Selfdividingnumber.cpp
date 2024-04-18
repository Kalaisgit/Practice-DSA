#include <bits/stdc++.h>
vector<int> findAllSelfDividingNumbers(int lower, int upper)
{
  vector<int> ans;
  for (int i = lower; i <= upper; i++)
  {
    int num = i;
    int temp = num;
    bool selfdivide = true;
    while (temp > 0 && selfdivide == true)
    {

      int digit = temp % 10;
      if (digit == 0 || num % digit != 0)
      {
        selfdivide = false;
      }

      temp = temp / 10;
    }
    if (selfdivide == true)
      ans.push_back(num);
  }
  return ans;
}
int main()
{
  int lower = 10;
  int upper = 30;
  // 11 -> gives 0 if 11%1 = 0, 11 % 1 = 0
  // 12,15,22,24 same
  vector<int> res = findAllSelfDividingNumbers(lower, upper);
  cout << "\n The self dividing numbers are :";

  for (auto it : res)
  {
    cout << it << " ";
  }
  return 0;
}