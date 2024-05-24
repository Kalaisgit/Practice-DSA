
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
Node *Adding_LL(Node *head1, Node *head2)
{
  Node *t1 = head1;
  Node *t2 = head2;
  Node *dummy = new Node(-1);
  Node *current = dummy;
  int carry = 0;
  while (t1 != NULL || t2 != NULL)
  {
    int sum = carry;
    if (t1)
    {
      sum += t1->data;
    }
    if (t2)
    {
      sum += t2->data;
    }

    carry = sum / 10;
    Node *node = new Node(sum % 10);

    current->next = node;
    current = node;

    if (t1)
      t1 = t1->next;
    if (t2)
      t2 = t2->next;
  }

  if (carry)
  {
    Node *last = new Node(carry);
    current->next = last;
  }
  Node *new_head = dummy->next;
  delete dummy;
  return new_head;
}

int main()
{
  vector<int> a = {8, 9, 9};
  vector<int> b = {1, 1, 1};

  Node *head1 = Convert_arr_to_LL(a);
  Node *head2 = Convert_arr_to_LL(b);
  Node *head = Adding_LL(head1, head2);

  cout << "\n LL after adding 1, LL looks like ";
  print(head);
  return 0;
}