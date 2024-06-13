#include <bits/stdc++.h>

int Convert_binary_2_decimal(string s)
{
  int power = 1;
  int n = 0;
  for (int i = s.size() - 1; i >= 0; i--)
  {
    if (s[i] == '1')
      n += power;

    power = power * 2;
  }

  return n;
}
int main()
{
  string s;
  cout << "\n enter N in binary :";
  cin >> s;
  int n = Convert_binary_2_decimal(s);
  cout << "\n the decimal equivalent of " << s << " is " << n;
  return 0;
}
