#include <bits/stdc++.h>
string reverse(string &str)
{
  int n = str.size();
  int i = 0;
  int j = n - 1;

  while (i < j)
  {
    char temp = str[j];
    str[j] = str[i];
    str[i] = temp;
    i++;
    j--;
  }
  return str;
}
string Convert_decimal_2_binary(int N)
{
  string str = "";
  while (N > 0)
  {
    if (N % 2 == 1)
      str += '1';
    else
      str += '0';
    N = N / 2;
  }

  str = reverse(str);
  return str;
}
int main()
{
  int N;
  cout << "\n enter N :";
  cin >> N;
  string str = Convert_decimal_2_binary(N);
  cout << "\n the binary equivalent of " << N << " is " << str;
  return 0;
}
