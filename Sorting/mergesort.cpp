#include <bits/stdc++.h>
void ms(vector<int> &arr, int low, int mid, int high)
{
  vector<int> temp;
  int left = low;
  int right = mid + 1;
  while (left <= mid && right <= high)
  {
    if (arr[left] <= arr[right])
    {
      temp.push_back(arr[left]);
      left++;
    }
    else
    {
      temp.push_back(arr[right]);
      right++;
    }
  }
  while (left <= mid)
  {
    temp.push_back(arr[left]);
    left++;
  }
  while (right <= high)
  {
    temp.push_back(arr[right]);
    right++;
  }
  for (int i = low; i <= high; i++)
  {
    arr[i] = temp[i - low];
  }
}

void mergesort(vector<int> &arr, int low, int high)
{
  if (low >= high)
  {
    return;
  }

  int mid = (high + low) / 2;

  mergesort(arr, low, mid);      // first half
  mergesort(arr, mid + 1, high); // second half

  ms(arr, low, mid, high); // merging
}
int main()
{
  int n, a;
  cout << "Enter the size of array ";
  cin >> n;
  vector<int> arr;
  for (int i = 0; i < n; i++)
  {
    cout << "\n Enter the array element ";
    cin >> a;
    arr.push_back(a);
  }

  mergesort(arr, 0, n - 1);

  cout << "The sorted array is " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i];
  }

  /*for (auto it : arr)
  {
    cout << it;
  }*/

  return 0;
}