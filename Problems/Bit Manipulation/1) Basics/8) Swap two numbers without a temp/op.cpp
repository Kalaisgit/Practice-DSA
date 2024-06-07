#include <bits/stdc++.h>
void Swap_a_b(int &a, int &b)
{
  a = a ^ b;
  b = a ^ b; // (a^b) ^ b = a, as b^b = 0; b = a
  a = a ^ b; // (a^b) ^ a = b, as a^a = 0; a = b
}
int main()
{
  int a = 5;
  int b = 6;
  cout << "\n Before swap a = " << a << ", b = " << b;
  Swap_a_b(a, b);
  cout << "\n After swap a = " << a << ", b = " << b;
  return 0;
}