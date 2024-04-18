#include <bits/stdc++.h>
vector<int> Permutation(vector<int> a)
{
  int ind = -1;
  int n = a.size();
  for (int i = n - 2; i >= 0; i--)
  {
    if (a[i] < a[i + 1])
    {
      ind = i;
      break;
    }
  }
  if (ind == -1)
  {
    reverse(a.begin(), a.end());
    return a;
    }
  for (int i = n - 1; i > ind; i--)
  {
    if (a[i] > a[ind])
    {
      swap(a[i], a[ind]);
      break;
    }
  }
  reverse(a.begin() + ind + 1, a.end());
  return a;
}

int main()
{
  vector<int> a = {1, 2, 3, 4, 5};
  vector<int> res = Permutation(a);
  for (auto it : res)
  {
    cout << it << " ";
  }
}