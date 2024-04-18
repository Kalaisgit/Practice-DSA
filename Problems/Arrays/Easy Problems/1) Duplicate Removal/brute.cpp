#include <bits/stdc++.h>

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  set<int> st;
  for (int i = 0; i < n; i++)
  {
    st.insert(arr[i]);
  }
  int count = 0;
  for (auto it : st)
  {
    count++;
  }
  cout << count;
  return 0;
}