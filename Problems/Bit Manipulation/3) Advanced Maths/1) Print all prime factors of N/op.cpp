#include <bits/stdc++.h>

vector<int> Prime_factors(int N)
{
  vector<int> ans;

  for (int i = 2; i <= sqrt(N); i++)
  {
    if (N % i == 0)
    {
      ans.push_back(i);

      while (N % i == 0)
      {
        N = N / i;
      }
    }
  }

  if (N != 1)
    ans.push_back(N);

  return ans;
}
int main()
{
  int N = 780;
  vector<int> factors = Prime_factors(N);

  cout << "\n prime factors are : {";
  for (int i = 0; i < factors.size(); i++)
  {
    cout << factors[i] << " ";
    if (i < factors.size() - 1)
      cout << ", ";
  }
  cout << "}";

  return 0;
}