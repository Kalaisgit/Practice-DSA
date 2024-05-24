#include <bits/stdc++.h>
class Node
{

public:
  int data;
  Node *next;
  Node *back;

public:
  Node(int data1, Node *next1, Node *back1)
  {
    data = data1;
    next = next1;
    back = back1;
  }

public:
  Node(int data1)
  {
    data = data1;
    next = nullptr;
    back = nullptr;
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
int main()
{
  vector<int> a = {2, 7, 9, 5, 6, 12};

  Node *head = Convert_arr_DLL(a);

  cout << "\n The DLL looks like :";
  Print(head);
  return 0;
}