// tc --> O(N+N/2)
// sc --> O(N/2 + N/2) = O(N) { N/2 space required for each of the positive and negative element arrays, where N = size of the array A}.

#include <bits/stdc++.h>

vector<int> Rearrange_array(vector<int> a)
{
  int n = a.size();
  vector<int> positive;
  vector<int> negative;
  for (int i = 0; i < n; i++)
  {
    if (a[i] > 0)
      positive.push_back(a[i]);
    else
      negative.push_back(a[i]);
  }
  for (int i = 0; i < n / 2; i++)
  {
    a[2 * i] = positive[i];
    a[2 * i + 1] = negative[i];
  }
  return a;
}

int main()
{
  // length of a is always even
  // n/2 --> +ve numbers, n/2 --> -ve numbers

  vector<int> a = {1, -1, -2, 2, 4, -3};

  // expected output -> {1,-1,2,-2,4,-3}
  // at index-value -> 0->1, 2->2, 4->4 , 1->(-1), 3->(-2), 5->(-3)

  vector<int> result = Rearrange_array(a);
  for (auto it : result)
  {
    cout << it << " ";
  }
}