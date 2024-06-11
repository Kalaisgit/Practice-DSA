#include <bits/stdc++.h>

const int SIZE = 2e5;

vector<vector<int>> Small_prime_factorisation(vector<int> &queries)
{
  int spf[SIZE + 1]; // hash
  // spf -> small prime factors

  for (int i = 1; i <= SIZE; i++)
  {
    spf[i] = i;
  }

  for (int i = 2; i * i <= SIZE; i++)
  {
    if (spf[i] == i)
      for (int j = i * i; j <= SIZE; j += i)
      {
        if (spf[j] == j)
        {
          spf[j] = i;
        }
      }
  }

  vector<vector<int>> list;

  for (int i = 0; i < queries.size(); i++)
  {
    vector<int> ls;
    int n = queries[i];
    while (n != 1)
    {
      ls.push_back(spf[n]);
      n = n / spf[n];
    }
    list.push_back(ls);
  }

  return list;
}

int main()
{

  vector<int> queries = {25, 28, 9, 22, 200000};

  vector<vector<int>> ans = Small_prime_factorisation(queries);

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