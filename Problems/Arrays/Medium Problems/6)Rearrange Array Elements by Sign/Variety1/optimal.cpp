// Time Complexity:
// O(N) { O(N) for traversing the array once and substituting positives and negatives simultaneously using pointers, where N = size of the array A}.

// Space Complexity:
// O(N) { Extra Space used to store the rearranged elements separately in an array, where N = size of array A}.

#include <bits/stdc++.h>
vector<int> Rearrange_array(vector<int> &a)
{
  int n = a.size();
  vector<int> ans(n, 0);
  int positive_index = 0;
  int negative_index = 1;
  for (int i = 0; i < n; i++)
  {
    if (a[i] > 0)
    {
      ans[positive_index] = a[i];
      positive_index = positive_index + 2;
    }
    else
    {
      ans[negative_index] = a[i];
      negative_index = negative_index + 2;
    }
  }
  return ans;
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