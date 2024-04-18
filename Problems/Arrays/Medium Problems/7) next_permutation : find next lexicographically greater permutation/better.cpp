// using inbuilt c++ stl

#include <bits/stdc++.h>
void Next_permutation(vector<int> a)
{
  next_permutation(a.begin(), a.end());
  for (auto it : a)
  {
    cout << it << " ";
  }
}
int main()
{
  vector<int> a = {1, 2, 3};
  Next_permutation(a);
}