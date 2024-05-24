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

public:
  Node(int data1, Node *next1)
  {
    data = data1;
    next = next1;
  }
};

Node *convert_array_2_LL(vector<int> &a)
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

Node *insertion_of_element_in_LL(Node *head, int el)
{
  while (head == NULL)
    return new Node(el);

  Node *temp = head;

  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  Node *tail = new Node(el);
  temp->next = tail;

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
  vector<int> a = {2, 4, 5, 6, 8};

  Node *head = convert_array_2_LL(a);

  int el;
  cout << "\n Enter element you wanna insert in LL after tail ";
  cin >> el;
  head = insertion_of_element_in_LL(head, el);

  cout << "\n The LL after element is inserted ";
  Print(head);
}