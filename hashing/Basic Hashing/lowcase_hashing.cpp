// Hashing of lowercase alphabets - character hashing

#include <bits/stdc++.h>

int main()
{
  string s;
  cout << "\n enter your string - character array ";
  cin >> s;

  int hash[26] = {0}; // maximum can be 26 letters only

  for (int i = 0; i < s.size(); i++)
  {
    hash[s[i] - 'a']++;
  }

  int q;
  cout << "\n number of elemnts u wanna search ";
  cin >> q;
  while (q--)
  {
    char c;
    cout << "\n enter the character element ";
    cin >> c;
    cout << "\n number of occurences ";
    cout << hash[c - 'a'] << endl;
  }
}