// O(2N)
#include <bits/stdc++.h>
class Node
{
public:
  int data;
  Node *next;

public:
  Node(int data1)
  {
    data = data1;
    next = nullptr;
  }
};
Node *Convert_arr_to_LL(vector<int> &a)
{
  Node *head = new Node(a[0]);

  Node *mover = head;
  for (int i = 1; i < a.size(); i++)
  {
    Node *temp = new Node(a[i]);
    mover->next = temp;
    mover = temp;
  }
  return head;
}
void print(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}
Node *Sort_0_1_2(Node *head)
{
  if (head == NULL || head->next == NULL)
    return head;
  Node *temp = head;

  int cnt0 = 0;
  int cnt1 = 0;
  int cnt2 = 0;

  while (temp != NULL) // O(N)
  {
    if (temp->data == 0)
      cnt0++;
    else if (temp->data == 1)
      cnt1++;
    else
      cnt2++;

    temp = temp->next;
  }

  temp = head;

  while (temp != NULL) // O(N)
  {
    if (cnt0 > 0)
    {
      temp->data = 0;
      cnt0--;
    }
    else if (cnt1 > 0)
    {
      temp->data = 1;
      cnt1--;
    }
    else if (cnt2 > 0)
    {
      temp->data = 2;
      cnt2--;
    }
    temp = temp->next;
  }
  return head;
}

int main()
{
  vector<int> a = {2, 1, 1, 1, 2, 2, 0, 1, 2, 0, 0, 0};

  Node *head = Convert_arr_to_LL(a);

  head = Sort_0_1_2(head);

  cout << "\n LL after sorting 0s,1s,2s looks like ";
  print(head);
  return 0;
}