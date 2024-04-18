#include <bits/stdc++.h>

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int i = 0;
  for (int j = 0; j < n; j++)
  {
    if (arr[i] != arr[j])
    {
      arr[i + 1] = arr[j];
      i++;
    }
  }
  cout << i + 1;
  return 0;
}