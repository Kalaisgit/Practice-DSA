#include <bits/stdc++.h>
using namespace std;

void printfibotriangle(int n)
{
  int a = 0, b = 1, i, j, c;
  for (int i = 1; i <= n; i++)
  {
    a = 0;
    b = 1;
    cout << b << "\t";
    for (j = 1; j < i; j++)
    {
      c = a + b;
      cout << c << "\t";
      a = b;
      b = c;
    }
    cout << "\n";
  }
}
int main()
{
  int n;
  cout << "enter n : ";
  cin >> n;
  printfibotriangle(n);
  return 0;
}
