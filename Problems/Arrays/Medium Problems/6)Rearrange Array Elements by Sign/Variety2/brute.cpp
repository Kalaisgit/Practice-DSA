// worst case time complexity --> O(N)+O(N)--> O(2N)
// SC --> O(N)

#include <bits/stdc++.h>
vector<int> Rearrange_array(vector<int> &a)
{
  int n = a.size();
  vector<int> pos;
  vector<int> neg;
  for (int i = 0; i < n; i++)
  {
    if (a[i] > 0)
    {
      pos.push_back(a[i]);
    }
    else
    {
      neg.push_back(a[i]);
    }
  }

  if (neg.size() < pos.size())
  {
    for (int i = 0; i < neg.size(); i++)
    {
      a[i * 2] = pos[i];
      a[i * 2 + 1] = neg[i];
    }
    int index = neg.size() * 2;

    for (int i = neg.size(); i < pos.size(); i++)
    {
      a[index] = pos[i];
      index++;
    }
  }
  else
  {
    for (int i = 0; i < pos.size(); i++)
    {
      a[i * 2] = pos[i];
      a[i * 2 + 1] = neg[i];
    }

    int index = pos.size() * 2;

    for (int i = pos.size(); i < neg.size(); i++)
    {
      a[index] = neg[i];
      index++;
    }
  }
  return a;
}
int main()
{
  // number of +ve numbers != number of -ve numbers

  vector<int> a = {1, -1, -2, 2, 4, -3, 5, 6, 7};

  // expected output -> {1,-1,2,-2,4,-3,5,6,7}
  // at index-value -> 0->1, 2->2, 4->4, 1->(-1), 3->(-2), 5->(-3)
  // at remaining indices -> just place the majority(either +ve or -ve ) --> 6-->5, 7-->6, 8-->7

  vector<int> result = Rearrange_array(a);
  for (auto it : result)
  {
    cout << it << " ";
  }
}