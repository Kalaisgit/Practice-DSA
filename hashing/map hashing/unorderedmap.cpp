#include <bits/stdc++.h>

int main()
{
  string s;
  cout << "\n enter the character array - string ";
  cin >> s;
  // map --> keyword, <keydatatype, valuedatatype> , mpp--> map name ,
  // keydatatype can be any datatype except pair<datatype,datatype>
  unordered_map<char, int> mpp;
  for (int i = 0; i < s.size(); i++)
  {
    mpp[s[i]]++;
  }

  // iterating through map, accessing the key and value using it - iterator,
  // auto --> auto typecast datatype to iterator it.
  // unordered map stores in random order
  for (auto it : mpp)
  {
    cout << it.first << "--->" << it.second << endl;
  }

  /*int q;
  cout << "\n enter the number of elements u wanna search ";
  cin >> q;

  while (q--)
  {
    int number;
    cout << "\n Search ";
    cin >> number;
    cout << "\n number of occurences ";
    cout << mpp[number];
  */

  return 0;
}
