// O(2N)

#include <bits/stdc++.h>
void SortArray(vector<int> &a)
{
  int count0 = 0;
  int count1 = 0;
  int count2 = 0;
  for (int i = 0; i < a.size(); i++)
  {
    if (a[i] == 0)
    {
      ++count0;
    }
    else if (a[i] == 1)
    {
      ++count1;
    }
    else
    {
      ++count2;
    }
  }
  for (int i = 0; i < count0; i++)
  {
    a[i] = 0;
  }

  for (int i = count0; i < count0 + count1; i++)
  {
    a[i] = 1;
  }

  for (int i = count0 + count1; i < a.size(); i++)
  {
    a[i] = 2;
  }

  for (auto it : a)
  {
    cout << it << " ";
  }
}
int main()
{
  vector<int> a = {1, 0, 2, 0, 1, 1, 2, 2, 0, 1, 1, 1, 0, 0, 2};
  SortArray(a);
  return 0;
}