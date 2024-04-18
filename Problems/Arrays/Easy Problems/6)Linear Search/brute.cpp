#include <bits/stdc++.h>

int main()
{
  int n;
  cout << "\n enter size of array ";
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cout << "\n Array input ";
    cin >> arr[i];
  }
  int number;
  cout << "\n enter the number you want to search ";
  cin >> number;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] == number)
    {
      cout << "\n Present at " << i << " index";
    }
    }
  return -1;
}