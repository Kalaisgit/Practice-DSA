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

Node *Convert_to_Linkedlist(vector<int> &a)
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
Node *Delete_kth_node_LL(Node *head, int k)
{
  if (head == NULL)
    return NULL;
  if (k == 1)
  {
    Node *temp = head;
    head = head->next;

    delete temp;
    return head;
  }

  Node *temp = head;
  int cnt = 0;
  Node *previous = NULL;
  while (temp != NULL)
  {
    cnt++;

    if (cnt == k)
    {
      previous->next = previous->next->next;

      delete temp;

      break;
    }

    previous = temp;
    temp = temp->next;
  }
  return head;
}

void Print(Node *head)
{
  Node *temp = head;

  while (temp != nullptr)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}

int main()
{
  vector<int> a = {2, 4, 6, 7, 8};
  Node *head = Convert_to_Linkedlist(a);

  int k;
  cout << "\n Enter which node you wanna delete in the linkedlist, k = ";
  cin >> k;

  head = Delete_kth_node_LL(head, k);

  cout << "\n The LInked List after the node is deleted will look like ";
  Print(head);

  cout << "\n Enter which node you wanna delete in the linkedlist, k = ";
  cin >> k;
  head = Delete_kth_node_LL(head, k);

  cout << "\n The LInked List after the node is deleted will look like ";
  Print(head);

  return 0;
}