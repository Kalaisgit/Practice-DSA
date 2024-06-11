#include <bits/stdc++.h>

vector<int> All_Divisors(int N)
{
  vector<int> ans;

  for (int i = 1; i <= sqrt(N); i++)
  {
    if (N % i == 0)
    {
      ans.push_back(i);

      if (N / i != i)
        ans.push_back(N / i);
    }
  }

  return ans;
}
int main()
{
  int N = 25;
  vector<int> divisors = All_Divisors(N);

  cout << "\n prime factors are : {";
  for (int i = 0; i < divisors.size(); i++)
  {
    cout << divisors[i] << " ";
    if (i < divisors.size() - 1)
      cout << ", ";
  }
  cout << "}";

  return 0;
}