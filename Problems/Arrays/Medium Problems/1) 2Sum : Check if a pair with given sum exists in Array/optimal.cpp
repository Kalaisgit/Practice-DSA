// two pointer approach
// giving wrong answer

#include <bits/stdc++.h>
void Pairexist(vector<int> &a, int n, int target)
{
  int left = 0;
  int right = n - 1;

  sort(a.begin(), a.end()); // sorting important

  while (left <= right)
  {
    int sum = a[left] + a[right];
    if (sum == target)
    {
      cout << "yes" << endl;
      cout << left << "," << right;
      return;
    }
    else if (sum < target)
      left++;
    else
      right--;
  }
}

int main()
{
  vector<int> a;
  int target;
  cout << "\n enter target ";
  cin >> target;
  int n;
  cout << "\n enter size of array ";
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int e;
    cout << "\n enter array input ";
    cin >> e;
    a.push_back(e);
  }
  Pairexist(a, n, target);
  return 0;
}