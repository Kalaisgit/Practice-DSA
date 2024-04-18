// Morr's voting Algol
// O(N) , S(1)

#include <bits/stdc++.h>

int Find_Number_occuring_morethan_n_by_2(vector<int> a)
{
  int el;
  int cnt = 0; // nothing to do with occurence of element present more than n/2
  for (int i = 0; i < a.size(); i++)
  {
    if (cnt == 0)
    {
      cnt = 1;
      el = a[i];
    }
    else if (a[i] == el)
    {
      cnt++;
    }
    else
    {
      cnt--;
    }
  }

  int count = 0;
  for (int i = 0; i < a.size(); i++)
  {
    if (el == a[i])
    {
      count++; // number of times el occurs
    }
    if (count > a.size() / 2)
    {
      return el;
    }
  }
  return -1;
}
int main()
{
  vector<int> a = {1, 2, 2, 3, 3, 4, 5, 5, 5, 5, 5, 5, 5, 5};
  int num = Find_Number_occuring_morethan_n_by_2(a);
  cout << num;
  return 0;
}