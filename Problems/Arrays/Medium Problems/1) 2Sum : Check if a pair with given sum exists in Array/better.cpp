// O(NlogN)

#include <bits/stdc++.h>
void Pairexist(vector<int> &a, int n, int target)
{
  map<int, int> mpp;
  for (int i = 0; i < n; i++)
  {
    int num = a[i];
    int moreneeded = target - a[i];
    if (mpp.find(moreneeded) != mpp.end())
    {
      cout << "Yes, pair is present";
      cout << "\nPair is [ " << mpp[moreneeded] << " , " << i << " ]";
    }
    mpp[num] = i;
  }
}

int main()
{
  vector<int> a;
  int target;
  cout << "\n enter target ";
  cin >> target;
  int n;
  cout << "\n enter size of array ";
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int e;
    cout << "\n enter array input ";
    cin >> e;
    a.push_back(e);
  }
  Pairexist(a, n, target);
  return 0;
}