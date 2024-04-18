#include <bits/stdc++.h>

int main()
{
  int n;
  cout << "\n enter the size of array ";
  cin >> n;
  vector<int> arr;
  int a;

  for (int i = 0; i < n; i++)
  {
    cout << "\n enter array input ";
    cin >> a;
    arr.push_back(a);
  }
  cout << "\n Before Left rotating array " << endl
       << "[ ";
  for (auto it : arr)
  {
    cout << it << " ";
  }
  cout << " ]";
  cout << "\n Left rotating array by 1 place " << endl
       << "[ ";
  int temp = arr[0];
  for (int i = 0; i < n; i++)
  {
    arr[i - 1] = arr[i];
  }
  arr[n - 1] = temp;
  for (auto it : arr)
  {
    cout << it << " ";
  }
  cout << " ]";
  return 0;
}