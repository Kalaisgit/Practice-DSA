// brute force
#include <bits/stdc++.h>

int main()
{
  int n;
  cout << "\n enter the size of your array ";
  cin >> n;
  int arr[n];
  cout << "\n enter the array elements that includes 0 as input" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << "\n Enter array input ";
    cin >> arr[i];
  }
  vector<int> temp;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] != 0)
    {
      temp.push_back(arr[i]);
    }
  }
  int m = temp.size();
  for (int i = 0; i < m; i++)
  {
    arr[i] = temp[i];
  }
  for (int i = m; i < n; i++)
  {
    arr[i] = 0;
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}