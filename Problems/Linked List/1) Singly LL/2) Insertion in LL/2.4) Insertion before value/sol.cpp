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

Node *insertion_of_element_in_LL(Node *head, int el, int val)
{
  if (head == NULL)
  {
    return NULL;
  }

  while (head->data == val)
  {
    Node *temp = new Node(el, head);
    return temp;
  }

  Node *temp = head;

  while (temp->next != nullptr)
  {

    if (temp->next->data == val)
    {
      Node *New_node = new Node(el);
      New_node->next = temp->next;
      temp->next = New_node;
      break;
    }
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
  vector<int> a = {2, 4, 5, 6, 8};

  Node *head = convert_array_2_LL(a);

  int el;
  cout << "\n Enter element you wanna insert in LL, before the value:  ";
  cin >> el;

  int val;
  cout << "\n Enter the value where you want your element to be placed before in the LL ";
  cin >> val;
  head = insertion_of_element_in_LL(head, el, val);

  cout << "\n The LL after the element is inserted, ";
  Print(head);
}