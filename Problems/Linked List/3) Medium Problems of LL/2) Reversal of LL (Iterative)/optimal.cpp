// TC ->O(N) = O(2N)
// SC -> O(1)

#include <bits/stdc++.h>
class Node
{

public:
  int data;
  Node *next;

public:
  Node(int data1, Node *next1)
  {
    data = data1;
    next = next1;
  }

public:
  Node(int data1)
  {
    data = data1;
    next = nullptr;
  }
};

Node *Convert_arr_DLL(vector<int> &a)
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

void Print(Node *head)
{
  Node *temp = head;

  while (temp != nullptr)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}
Node *Reversal_LL(Node *head)
{
  Node *temp = head;
  Node *previous = NULL;
  while (temp != NULL)
  {
    Node *after = temp->next;
    temp->next = previous;
    previous = temp;
    temp = after;
  }

  return previous;
}
int main()
{
  vector<int> a = {2, 5, 7, 10, 4, 6, 9};
  Node *head = Convert_arr_DLL(a);
  cout << "\n The DLL looks like :";
  Print(head);
  head = Reversal_LL(head);
  cout << "\n The DLL looks like :";
  Print(head);
  return 0;
}