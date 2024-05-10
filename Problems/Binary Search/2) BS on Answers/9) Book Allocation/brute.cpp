#include <bits/stdc++.h>
bool students_allocated(vector<int> &books, int n, int limit, int total_students)
{
  int pages = books[0];
  int student = 1;
  for (int i = 1; i < n; i++)
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
  return (student == total_students);
}

int findPages(vector<int> &books, int n, int m)
{
  if (m > n)
    return -1;
  int low = *max_element(books.begin(), books.end());

  int high = accumulate(books.begin(), books.end(), 0);

  for (int i = low; i <= high; i++)
  {
    if (students_allocated(books, n, i, m))
      return i;
  }
  return -1;
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