#include <bits/stdc++.h>

int main()
{
  int x = 10;
  cout << &x;

  int *y = &x;

  cout << "\n value stored at memory location " << y << " is "
       << *y;
  return 0;
}