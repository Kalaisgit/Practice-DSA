#include <bits/stdc++.h>

void SwapifGreater(int a[], int b[], int ind1, int ind2)
{
  if (a[ind1] > b[ind2])
  {
    swap(a[ind1], b[ind2]);
  }
}

void Merge_two_sorted_arrays(int a[], int b[], int n, int m)
{
  int len = m + n;
  int gap = (len / 2) + (len % 2);
  while (gap > 0)
  {
    int p1 = 0;
    int p2 = p1 + gap;
    while (p2 < len)
    {
      // pointers in arr1,arr2
      if (p1 < n && p2 >= n)
      {
        SwapifGreater(a, b, p1, p2 - n);
      }

      // arr2,arr2
      else if (p1 >= n && p2 >= n)
      {
        SwapifGreater(b, b, p1 - n, p2 - n);
      }
      else
      {
        SwapifGreater(a, a, p1, p2);
        //(p1 < n && p2 < n)
        // arr1,arr1
      }
      p1++;
      p2++;
    }
    if (gap <= 1)
    {
      break;
    }
    gap = (gap / 2) + (gap % 2);
  }
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