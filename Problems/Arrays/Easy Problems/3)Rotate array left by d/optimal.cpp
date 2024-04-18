#include <bits/stdc++.h>

void RotateArrayBy_k(int arr[], int k, int n)
{
  int d = k % n;
  reverse(arr, arr + d);     // reverse elements from index 0 to d-1
  reverse(arr + d, arr + n); // reverse elements from index d to n-1
  reverse(arr, arr + n);     // reverse elements from index 0 to n-1
}

int main()
{
  int n;

  cout << "\n Enter the size of your array ";

  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++)
  {

    cout << "\n Enter array input ";
    cin >> arr[i];
  }

  int k;
  cout << "\n enter the value by how much you are going to left rotate your array ";
  cin >> k;

  RotateArrayBy_k(arr, k, n);

  cout << "\n After rotating array " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}