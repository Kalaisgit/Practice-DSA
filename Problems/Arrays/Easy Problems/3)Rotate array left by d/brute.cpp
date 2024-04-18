#include <bits/stdc++.h>
void RotateArrayBy_k(vector<int> &arr, int k)
{
  int n = arr.size();

  int d = k % n;
  int temp[d];
  for (int i = 0; i < d; i++)
  {
    temp[i] = arr[i];
  }
  for (int i = d; i < n; i++)
  {
    arr[i - d] = arr[i];
  }
  int j = 0; // additional variable --> so brute
  for (int i = n - d; i < n; i++)
  {
    arr[i] = temp[j];
    j++;
  }
}
int main()
{
  int n;

  cout << "\n Enter the size of your array ";

  cin >> n;

  vector<int> arr;

  for (int i = 0; i < n; i++)
  {
    int element;
    cout << "\n Enter array input ";
    cin >> element;
    arr.push_back(element);
  }

  int k;
  cout << "\n enter the value by how much you are going to left rotate your array ";
  cin >> k;

  RotateArrayBy_k(arr, k);

  cout << "\n After rotating array " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}