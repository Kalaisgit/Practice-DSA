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
Node *Delete_key_DLL(Node *head, int key)
{
  Node *temp = head;

  while (temp != NULL)
  {

    if (temp->data == key)
    {
      if (temp == head)
      {
        head = temp->next;
      }

      Node *nextnode = temp->next;
      Node *previous = temp->prev;

      if (previous)
        previous->next = nextnode;
      if (nextnode)
        nextnode->prev = previous;

      delete temp;
      temp = nextnode;
    }
    else
      temp = temp->next;
  }
  return head;
}
int main()
{
  vector<int> a = {10, 7, 10, 10, 6, 10};

  Node *head = Convert_arr_DLL(a);

  cout << "\n The DLL looks like :";
  Print(head);

  int key;
  cout << "\n enter the key : ";
  cin >> key;

  head = Delete_key_DLL(head, key);
  cout << "\n The DLL after deleting every key occurences look like ";
  Print(head);

  return 0;
}