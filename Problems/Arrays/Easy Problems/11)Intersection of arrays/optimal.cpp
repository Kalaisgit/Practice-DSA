// Optimal

#include <bits/stdc++.h>
void IntersectionArray(vector<int> &arr1, vector<int> &arr2)
{
  int n = arr1.size();
  int m = arr2.size();

  vector<int> result;

  int i = 0;
  int j = 0;

  while (i < n && j < m)
  {
    if (arr1[i] < arr2[j])
      i++;
    else if (arr1[i] > arr2[j])
      j++;
    else
    {
      result.push_back(arr1[i]);
      i++;
      j++;
    }
  }

  for (auto it : result)
  {
    cout << it << " ";
  }
}

int main()
{
  vector<int> a = {1, 1, 2, 3, 7, 8, 9, 11};
  vector<int> b = {1, 1, 2, 4, 5, 6, 11};

  IntersectionArray(a, b);
  return 0;
}