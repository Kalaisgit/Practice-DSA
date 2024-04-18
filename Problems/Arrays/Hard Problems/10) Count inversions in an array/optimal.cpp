#include <bits/stdc++.h>
int Merge(vector<int> &a, int low, int mid, int high)
{
  int right = mid + 1;
  int left = low;
  int cnt = 0;
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
      cnt += (mid - left + 1);
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

  cnt += Merge(a, low, mid, high);
  return cnt;
}

int numberOfInversions(vector<int> &a, int n)
{

  // Count the number of pairs:
  int cnt = mergesort(a, 0, n - 1);
  return cnt;
}

int main()
{
  vector<int> a = {5, 3, 2, 1, 4};
  int n = a.size();

  int count = numberOfInversions(a, n);
  cout << "\n count of inverted pairs in this array " << count;
}