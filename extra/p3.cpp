// recursion

#include <bits/stdc++.h>
void printname(int i, int n)
{
  if (n == 0 || i > n)
  {
    cout << "loop breaks";
    return;
  }
  if (i <= n)
  {
    cout << "raj" << endl;
    printname(i + 1, n);
  }
}

int main()
{
  int i, n;
  cin >> n;
  printname(1, n);
  return 0;
}