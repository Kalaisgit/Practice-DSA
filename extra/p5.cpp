#include <bits/stdc++.h>

int main()
{
  int n;
  cin >> n;
  int arr[100];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    arr[i] > arr[i + 1];
    for (int i = 0; i < n; i++)
    {
      cout << arr[i] << " ";
    }
    return 0;
  }
}