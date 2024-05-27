// tc->O(N+N) -> O(2N)
#include <bits/stdc++.h>
class Node
{

public:
  int data;
  Node *next;
  Node *prev;

public:
  Node(int data1, Node *next1, Node *prev1)
  {
    data = data1;
    next = next1;
    prev = prev1;
  }

public:
  Node(int data1)
  {
    data = data1;
    next = nullptr;
    prev = nullptr;
  }
};

Node *Convert_arr_DLL(vector<int> &a)
{
  Node *head = new Node(a[0]);

  Node *previous = head;

  for (int i = 1; i < a.size(); i++)
  {
    Node *temp = new Node(a[i], nullptr, previous); // backward link from previous to temp

    previous->next = temp; // forward link from previous to temp
    // hence two way links

    previous = temp;
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
Node *remove_duplicates(Node *head)
{
  Node *temp = head;

  while (temp != NULL && temp->next != NULL)
  {
    Node *nextnode = temp->next;

    while (nextnode != NULL && temp->data == nextnode->data)
    {
      Node *duplicate = nextnode;

      nextnode = nextnode->next;
      delete duplicate;
    }
    temp->next = nextnode;
    if (nextnode)
      nextnode->prev = temp;

    temp = nextnode;
  }
  return head;
}

int main()
{
  vector<int> a = {1, 2, 2, 3, 3, 4};

  Node *head = Convert_arr_DLL(a);

  cout << "\n The DLL looks like :";
  Print(head);

  head = remove_duplicates(head);

  cout << "\n after removing duplicates, The DLL looks like :";
  Print(head);

  return 0;
}