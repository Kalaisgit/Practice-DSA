#include <bits/stdc++.h>
void insertion_sort(int n, int arr[])
{
  for (int i = 0; i < n - 1; i++)
  {
    int j = i;

    while (j > 0 && arr[j - 1] > arr[j])
    {
      int temp = arr[j - 1];
      arr[j - 1] = arr[j];
      arr[j] = temp;
      j--;
    }
  }

  cout << "\n the sorted array is ";
  cout << "[ ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << " ]";
}
int main()
{
  cout << "\n enter the number of elements in array ";
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cout << "\n array input --> ";
    cin >> arr[i];
  }
  insertion_sort(n, arr);
  return 0;
}