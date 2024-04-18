// Output is wrong

// Brute

#include <bits/stdc++.h>
void IntersectionArray(vector<int> &a, vector<int> &b)
{
  int n1 = a.size();
  int n2 = b.size();
  vector<int> visited = {0};
  vector<int> temp;
  for (int i = 0; i < n1; i++)
  {
    for (int j = 0; j < n2; j++)
    {
      if (a[i] == b[j] && visited[j] == 0)
      {
        temp.push_back(a[i]);
        visited[j] = 1;
        break;
      }
      if (b[j] > a[i])
      {
        break;
      }
    }
  }
  for (auto it : temp)
  {
    cout << it << " ";
  }
}

int main()
{
  vector<int> a = {1, 1, 2, 3, 4, 5, 7};
  vector<int> b = {1, 1, 2, 4, 5, 8};
  IntersectionArray(a, b);
  return 0;
}