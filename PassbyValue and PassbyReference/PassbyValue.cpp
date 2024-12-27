// Passbyvalue -> basically passing the copy of value

#include <bits/stdc++.h>
void PassbyValue(int x)
{
  x = x + 5;
}
int main()
{
  int num = 5;
  PassbyValue(num); // copy of num is passed
  cout << "Pass by Value -> num : " << num;
  return 0;
}