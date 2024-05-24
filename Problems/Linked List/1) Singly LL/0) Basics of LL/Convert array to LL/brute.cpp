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

Node *convert_to_Linkedlist(vector<int> &a)
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
int main()
{
  vector<int> a = {4, 5, 6, 7, 8};

  Node *head = convert_to_Linkedlist(a);

  cout << "\n The head of the converted Linked list points to " << head->data;

  return 0;
}