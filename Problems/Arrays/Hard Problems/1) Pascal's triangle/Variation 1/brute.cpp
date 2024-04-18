// In this case, we are given the row number r and the column number c, and we need to find out the element at position (r,c).

#include <iostream>
using namespace std;

// Function to calculate binomial coefficient C(r, c) using iterative method
int nCr(int n, int r)
{
  if (r > n)
    return 0; // If c is greater than r, return 0 (invalid)

  int res = 1;

  for (int i = 0; i < r; ++i)
  {
    res = res * (n - i);
    res = res / (i + 1);
  }

  return res;
}

int main()
{
  int n, r;
  cout << "Enter the row number (n): ";
  cin >> n;
  cout << "Enter the column number (r): ";
  cin >> r;
  /*

  0:Row 1:    1
  1:Row 2:   1 1
  2:Row 3:  1 2 1
  3:Row 4: 1 3 3 1
  4:Row 5: 1 4 6 4 1

  */
  int element = nCr(n - 1, r - 1);

  cout << "Element at position (" << n << ", " << r << ") in Pascal's Triangle is: " << element << endl;

  return 0;
}
