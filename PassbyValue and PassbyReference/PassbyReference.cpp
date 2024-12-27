// PassbyReference
// A reference to the value is passed, thereby accessing the original value in the memory address

#include <bits/stdc++.h>
void PassbyReference(int &x)
{
  x = x + 20;
}
int main()
{
  int num = 10;
  PassbyReference(num);
  cout << "Pass by Reference ->" << num;
  return 0;
}
