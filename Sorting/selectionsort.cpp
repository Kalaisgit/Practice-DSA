#include <bits/stdc++.h>
void selection_sort(int arr[], int n)
{
  for (int i = 0; i < n - 2; i++)
  {
    int mini = i;
    for (int j = i; j <= n - 1; j++)
    {

      if (arr[j] < arr[mini])
      {
        mini = j;
      }
    }
    int temp = arr[mini]; // storing minimum element in temp variable

    arr[mini] = arr[i]; // interchange i th element to jth , because mini contains j

    // replacing minimum element ie, temp in i th index of array
    arr[i] = temp;
  }
}
int main()
{
  int n;
  cout << " Enter the size of array" << endl;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cout << " Enter the element"
         << " ";
    cin >> arr[i];
    cout << endl;
  }

  selection_sort(arr, n);

  cout << "The sorted array is " << endl;

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}