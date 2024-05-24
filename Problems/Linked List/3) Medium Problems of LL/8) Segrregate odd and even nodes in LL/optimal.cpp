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
Node *Odd_first_Even_second(Node *head)
{
  if (head == NULL || head->next == NULL)
    return head;

  Node *odd = head;
  Node *even = head->next;
  Node *even_head = head->next;

  while (even != NULL && even->next != NULL)
  {
    odd->next = odd->next->next;
    even->next = even->next->next;

    odd = odd->next;
    even = even->next;
  }
  odd->next = even_head;
  return head;
}
int main()
{
  vector<int> a = {1, 2, 3, 4, 5, 6};

  Node *head = Convert_arr_to_LL(a);

  head = Odd_first_Even_second(head);
  print(head);
}