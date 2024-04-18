#include <bits/stdc++.h>
vector<int> majorityElement(vector<int> &arr)
{
  vector<int> ans;
  int el1 = INT_MIN;
  int el2 = INT_MIN;
  int n = arr.size();
  int cnt1 = 0;
  int cnt2 = 0;
  for (int i = 0; i < n; i++)
  {
    if (cnt1 == 0 && el2 != arr[i])
    {
      cnt1 = 1;
      el1 = arr[i];
    }
    else if (cnt2 == 0 && el1 != arr[i])
    {
      cnt2 = 1;
      el2 = arr[i];
    }
    else if (el1 == arr[i])
    {
      cnt1++;
    }
    else if (el2 == arr[i])
    {
      cnt2++;
    }
    else
    {
      cnt1--;
      cnt2--;
    }
  }
  cnt1 = 0;
  cnt2 = 0;
  for (int i = 0; i < n; i++)
  {
    if (el1 == arr[i])
    {
      cnt1++;
    }
    if (el2 == arr[i])
    {
      cnt2++;
    }
  }
  int target = (int)(n / 3 + 1);
  if (cnt1 >= target)
  {
    ans.push_back(el1);
  }
  if (cnt2 >= target)
  {
    ans.push_back(el2);
  }

  return ans;
}
int main()
{
  vector<int> arr = {33, 11, 33, 11, 33, 11};
  vector<int> ans = majorityElement(arr);
  sort(ans.begin(), ans.end()); // sorted as 11, 33 or else it will be 33,11
  cout << "The majority elements are: ";
  for (auto it : ans)
    cout << it << " ";
  cout << "\n";
  return 0;
}