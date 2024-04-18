#include <bits/stdc++.h>
void MissingArray(vector<int> a, int N)
{
  int hash[N + 1];   // Intialize hash array of size N+1 i.e)6
  hash[N + 1] = {0}; // set all of the hash elements to 0

  for (int i = 0; i < N; i++)
  {
    hash[a[i]]++;
  }
  while (N--)
  {
    if (a[N] == 0)
    {
      cout << N;
    }
  }
}
int main()
{
  vector<int> a = {1, 2, 3, 5};
  int N = 5;
  MissingArray(a, N);
  return 0;
}