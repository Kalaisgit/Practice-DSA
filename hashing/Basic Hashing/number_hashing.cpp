#include <bits/stdc++.h>

int main()
{
  int n;
  cin >> n;
  int a[n];
  int number;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  // declaring a hash of size 13 to 0
  int hash[13] = {0};

  // updating hash value based on the occurence of element in array
  for (int i = 0; i < n; i++)
  {
    hash[a[i]] += 1;
  }
  cout << "\n enter the number you wanna find ";
  cin >> number;

  // fetching the number of occurences of a element in the array based on hash
  cout << hash[number] << endl;
  return 0;
}
