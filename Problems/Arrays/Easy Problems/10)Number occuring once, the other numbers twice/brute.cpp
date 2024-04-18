#include <bits/stdc++.h>
void Occur_once(vector<int> a)
{

  int n = a.size();

  for (int i = 0; i < n; i++)
  {
    int num = a[i];

    int count = 0;

    for (int j = 0; j < n; j++)
    {
      if (a[j] == num)
      {
        count++;
      }
    }

    if (count == 1)
    {
      cout << num;
    }
  }
}

int main()
{
  vector<int> a = {0, 0, 1, 1, 2, 3, 3, 4, 4, 10, 10};
  Occur_once(a);
  return 0;
}