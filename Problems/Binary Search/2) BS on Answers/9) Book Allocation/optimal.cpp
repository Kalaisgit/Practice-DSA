// Book Allocation , Split Array , Painters problem are all same approaches.

#include <bits/stdc++.h>
int students_allocated(vector<int> &books, int n, int limit)
{
  int pages = 0;
  int student = 1;
  for (int i = 0; i < n; i++)
  {
    if (pages + books[i] <= limit)
    {
      pages = pages + books[i];
    }
    else
    {
      pages = books[i];
      student++;
    }
  }
  return (student);
}

int findPages(vector<int> &books, int n, int m)
{
  int low = *max_element(books.begin(), books.end());

  int high = accumulate(books.begin(), books.end(), 0);

  while (low <= high)
  {
    int mid = (low + high) / 2;

    int student = students_allocated(books, mid, n);

    if (student > m)
      low = mid + 1;
    else
      high = mid - 1;
  }
  return low;
}
int main()
{
  vector<int> books = {25, 46, 28, 49, 24};
  int n = 5;
  int m = 4; // students
  int ans = findPages(books, n, m);
  cout << "The minimum of maximum pages allocated to a student can be: " << ans << "\n";
  return 0;
}