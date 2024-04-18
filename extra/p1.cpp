// sorting array using sort keyword

#include <bits/stdc++.h>
int main()
{
  int a[5] = {1, 2, 5, 6, 8};
  sort(a, a + 5);
  /*
  a+5 --> points to the address after the
  occurence of element 8, ie.) the next address to which the last element 8 is stored.
  */
  for (int i = 0; i < 5; i++)
  {
    cout << a[i] << " ";
  }

  sort(a, a + 5, greater<int>());
  // sorts array in descending order

  for (int i = 0; i < 5; i++)
  {
    cout << a[i] << " ";
  }

  return 0;
}