/*array reverse using recursion and pointing method*/

#include <bits/stdc++.h>
void arrayreverse(int i, int n, int *arr)
{

  if (i >= n / 2)
  {
    return;
  }

  swap(arr[i], arr[n - i - 1]);
  arrayreverse(i + 1, n - 1, arr);
}
int main()
{
  int n, arr[100];
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  arrayreverse(0, n, arr);
  cout << "[ ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "]";
  return 0;
}