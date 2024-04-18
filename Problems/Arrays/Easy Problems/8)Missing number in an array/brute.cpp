#include <bits/stdc++.h>
void MissingNumber(vector<int> a, int N)
{
  for (int i = 1; i <= N; i++)
  {
    int flag = 0;
    for (int j = 0; j < N; j++)
    {
      if (a[j] == i)
      {
        flag = 1;
        break;
      }
    }
    if (flag == 0)
    {
      cout << i;
    }
  }
}
int main()
{
  vector<int> a = {1, 2, 4, 5};
  int N = 5;
  MissingNumber(a, N);
  return 0;
}
