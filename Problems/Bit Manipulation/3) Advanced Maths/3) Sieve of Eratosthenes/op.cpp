// Tc-> O(N)  +  O( N * log(log N)) + O(N)

// SC -> O(N)

#include <bits/stdc++.h>

vector<int> All_primes(int N)
{
  vector<int> ans;
  int hash[N + 1];
  hash[N + 1] = 0;

  for (int i = 2; i <= N; i++)
  {
    hash[i] = 1;
  }

  for (int i = 2; i <= sqrt(N); i++)
  {
    for (int j = i * i; j <= N; j += i)
    {
      hash[j] = 0;
    }
  }

  for (int i = 0; i <= N; i++)
  {
    if (hash[i] == 1)
      ans.push_back(i);
  }

  return ans;
}
int main()
{
  int N = 30;
  vector<int> primes = All_primes(N);

  cout << "\n prime numbers are : {";
  for (int i = 0; i < primes.size(); i++)
  {
    cout << primes[i] << " ";
    if (i < primes.size() - 1)
      cout << ", ";
  }
  cout << "}";

  return 0;
}