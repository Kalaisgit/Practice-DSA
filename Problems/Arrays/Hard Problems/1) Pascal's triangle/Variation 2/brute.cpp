// Variation 2: Given the row number n. Print the n-th row of Pascal’s triangle.
#include <bits/stdc++.h>
void print_row_of_pascal_triangle(int r)
{
  int ans = 1;
  cout << ans;
  for (int i = 1; i < r; i++)
  {
    ans = ans * (r - i);
    ans = ans / i;
    cout << ans;
  }
}
int main()
{
  int r, c;
  cout << "\n enter row that you want to print ";
  cin >> r;
  print_row_of_pascal_triangle(r);
  return 0;
}
