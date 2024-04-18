// Optimal Approach

#include <bits/stdc++.h>

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cout << "\n enter array input ";
    cin >> arr[i];
  }
  int j = -1;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 0)
    {
      j = i;
      break;
      // this loop is to assign j to the index where first zero value occurs
    }
  }
  for (int i = j + 1; i < n; i++)
  {
    if (arr[i] != 0)
    {
      swap(arr[i], arr[j]);
      j++;
      // swapping non zero and zero
    }
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}