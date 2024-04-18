#include <bits/stdc++.h>

int main()
{
  int n;
  cout << "/n enter size of array ";
  cin >> n;
  int arr[n];
  cout << "\n enter the elements of array ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  // map --> keyword, <keydatatype, valuedatatype> , mpp--> map name
  map<int, int> mpp;
  for (int i = 0; i < n; i++)
  {
    mpp[arr[i]]++;
  }

  int q;
  cout << "\n enter the number of elements u wanna search ";
  cin >> q;

  while (q--)
  {
    int number;
    cout << "\n Search ";
    cin >> number;
    cout << "\n number of occurences ";
    cout << mpp[number];
  }
  return 0;
}
