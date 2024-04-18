// Program to generate Pascal's Triangle

#include <bits/stdc++.h>

vector<int> generaterow(int row)
{
  vector<int> ans_array;
  int answer = 1;
  ans_array.push_back(answer);
  for (int col = 1; col < row; col++)
  {
    answer = answer * (row - col);
    answer = answer / col;
    ans_array.push_back(answer);
  }
  return ans_array;
}

vector<vector<int>> pascaltriangle(int r)
{
  vector<vector<int>> res;
  for (int i = 1; i <= r; i++)
  {
    res.push_back(generaterow(i));
  }
  return res;
}

int main()
{
  int r;
  cout << "enter how many rows your pascal triangle must have ";
  cin >> r;

  vector<vector<int>> ans = pascaltriangle(r);

  for (auto it : ans)
  {
    for (auto el : it)
    {
      cout << el;
    }
    cout << "\n";
  }
  return 0;
}