#include <bits/stdc++.h>

void merge(vector<int> &a, int low, int mid, int high)
{
  int left = low;
  int right = mid + 1;
  vector<int> temp;
  while (left <= mid && right <= high)
  {
    if (a[left] <= a[right])
    {
      temp.push_back(a[left]);
      left++;
    }
    else
    {
      temp.push_back(a[right]);
      right++;
    }
  }
  while (left <= mid)
  {
    temp.push_back(a[left]);
    left++;
  }
  while (right <= high)
  {
    temp.push_back(a[right]);
    right++;
  }
  for (int i = low; i <= high; i++)
  {
    a[i] = temp[i - low];
  }
}
int countreversepairs(vector<int> &a, int low, int mid, int high)
{
  int cnt = 0;
  int right = mid + 1;
  for (int i = low; i <= mid; i++)
  {
    while (right <= high && a[i] > (2 * a[right]))
    {
      right++;
    }
    cnt += (right - (mid + 1));
  }
  return cnt;
}
int mergesort(vector<int> &a, int low, int high)
{
  int cnt = 0;
  if (low >= high)
  {
    return cnt;
  }

  int mid = (low + high) / 2;
  cnt += mergesort(a, low, mid);
  cnt += mergesort(a, mid + 1, high);
  cnt += countreversepairs(a, low, mid, high);

  merge(a, low, mid, high);
  return cnt;
}
int team(vector<int> &a, int n)
{
  int cnt = mergesort(a, 0, n - 1);
  return cnt;
}
int main()
{
  vector<int> a = {4, 1, 2, 3, 1};

  int n = a.size();
  int cnt = team(a, n);
  cout << "The number of reverse pair is: "
       << cnt << endl;
  return 0;
}
