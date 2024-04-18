#include <bits/stdc++.h>
void Merge_two_sorted_arrays(int a[], int b[], int n, int m)
{
  cout << n << " " << m << endl;

  int p1 = n - 1;
  int p2 = 0;
  while (p1 >= 0 && p2 < m)
  {
    if (a[p1] > b[p2])
    {
      swap(a[p1], b[p2]);
      p1--;
      p2++;
    }
    else
    {
      break;
    }
  }
  sort(a, a + n);
  sort(b, b + m);
}
int main()
{
  int a[] = {1, 4, 8, 10};
  int b[] = {2, 3, 9};
  int n = sizeof(a) / sizeof(a[0]);
  int m = sizeof(b) / sizeof(b[0]);

  Merge_two_sorted_arrays(a, b, n, m);

  cout << " \n array a : ";
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  cout << "\n array b : ";
  for (int i = 0; i < m; i++)
  {
    cout << b[i] << " ";
  }
  return 0;
}