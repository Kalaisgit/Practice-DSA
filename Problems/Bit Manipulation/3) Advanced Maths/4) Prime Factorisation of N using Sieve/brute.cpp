#include <bits/stdc++.h>

vector<int> Prime_factorisation(int n)
{
  vector<int> list;
  for (int i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
    {

      while (n % i == 0)
      {
        list.push_back(i);
        n = n / i;
      }
    }
  }

  if (n > 1)
    list.push_back(n);

  return list;
}

vector<vector<int>> Print_prime_factors(vector<int> &queries)
{
  vector<vector<int>> list;

  for (int i = 0; i < queries.size(); i++)
  {
    vector<int> ls = Prime_factorisation(queries[i]);

    list.push_back(ls);
  }
  return list;
}
int main()
{
  vector<int> queries = {25, 28, 9, 22, 11};

  vector<vector<int>> ans = Print_prime_factors(queries);

  cout << "\nafter prime factorisation " << endl;

  for (auto it : ans)
  {
    for (auto el : it)
    {
      cout << el << " ";
    }
    cout << endl;
  }

  return 0;
}