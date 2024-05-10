#include <bits/stdc++.h>
int Findmedian(int arr[3][3], int row, int col)
{
  vector<int> ls;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      ls.push_back(arr[i][j]);
    }
  }
  sort(ls.begin(), ls.end());

  return ls[(row * col) / 2];
}
int main()
{
  int row = 3, col = 3;
  int arr[3][3] = {{1, 3, 8},
                   {2, 3, 4},
                   {1, 2, 5}};
  cout << "The median of the row-wise sorted matrix is: " << Findmedian(arr, row, col) << endl;
  return 0;
}
