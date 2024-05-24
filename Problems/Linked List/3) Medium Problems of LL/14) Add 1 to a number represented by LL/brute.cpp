// O(3N)
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
Node *Reverse_LL(Node *head)
{
  if (head == NULL || head->next == NULL)
    return head;

  Node *new_head = Reverse_LL(head->next);

  Node *front = head->next;
  front->next = head;
  head->next = NULL;

  return new_head;
}
Node *Add1(Node *head)
{
  if (head == NULL)
    return head;

  int carry = 1;
  head = Reverse_LL(head);

  Node *temp = head;
  while (temp != NULL)
  {
    temp->data = temp->data + carry;
    if (temp->data < 10)
    {
      carry = 0;
      break;
    }
    else if (temp->data == 10)
    {
      temp->data = 0;
      carry = 1;
    }
    temp = temp->next;
  }
  head = Reverse_LL(head);
  if (carry == 1)
  {
    Node *new_head = new Node(carry);

    new_head->next = head;
    return new_head;
  }
  return head;
}

int main()
{
  vector<int> a = {9, 9, 5};

  Node *head = Convert_arr_to_LL(a);

  head = Add1(head);

  cout << "\n LL after adding 1, LL looks like ";
  print(head);
  return 0;
}