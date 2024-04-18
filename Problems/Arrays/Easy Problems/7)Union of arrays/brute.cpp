// brute
// union of two sorted or two unsorted array

#include <bits/stdc++.h>

void sortedArray(vector<int> &a, vector<int> &b)
{

  set<int> st;
  int n1 = a.size();
  int n2 = b.size();
  for (int i = 0; i < n1; i++)
  {
    st.insert(a[i]);
  }
  for (int i = 0; i < n2; i++)
  {
    st.insert(b[i]);
  }
  vector<int> temp;
  for (auto it : st)
  {
    temp.push_back(it);
  }
  for (auto it : temp)
  {
    cout << it << " ";
  }
}

int main()
{
  vector<int> a = {1, 2, 4, 4, 0, 8};
  vector<int> b = {1, 7, 8, 9, 0, 3};
  sortedArray(a, b);
  return 0;
}