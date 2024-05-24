// sorting 0s,1s,2s by changing links

// O(N)
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
  Node *zero_h = new Node(-1);
  Node *one_h = new Node(-1);
  Node *two_h = new Node(-1);

  Node *zero = zero_h;
  Node *one = one_h;
  Node *two = two_h;

  Node *temp = head;

  while (temp != NULL)
  {
    if (temp->data == 0)
    {
      zero->next = temp;
      zero = temp;
    }
    else if (temp->data == 1)
    {
      one->next = temp;
      one = temp;
    }
    else
    {
      two->next = temp;
      two = temp;
    }
    temp = temp->next;
  }

  zero->next = (one_h->next) ? one_h->next : two_h->next;

  one->next = two_h->next;
  two->next = NULL;

  head = zero_h->next;
  delete zero_h;
  delete one_h;
  delete two_h;

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