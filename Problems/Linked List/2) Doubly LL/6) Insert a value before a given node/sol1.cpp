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

Node *Insert_val_before_tail_DLL(Node *head, int val)
{

  if (head == NULL)
  {
    head = new Node(val);
    return head;
  }
  if (head->next == nullptr && head->back == nullptr)
  {
    Node *new_node = new Node(val, head, nullptr);
    head->back = new_node;

    return new_node;
  }
  else if (head->next != NULL && head->back == NULL)
  {
    Node *current = head;
    while (current->next->next != nullptr)
    {
      current = current->next;
    }
    Node *tail = current->next;
    Node *new_node = new Node(val, tail, nullptr); // new node created with next pointing to tail

    current->next = new_node;
    new_node->back = current;
    tail->back = new_node;
  }
  return head;
}
Node *Insert_val_before_head_DLL(Node *head, int val)
{
  if (head == NULL)
  {
    head = new Node(val);
    return head;
  }
  if (head->next == nullptr && head->back == nullptr)
  {
    Node *new_head = new Node(val, head, nullptr);
    head->back = new_head;

    return new_head;
  }
  else if (head->next != NULL && head->back == NULL)
  {
    Node *new_head = new Node(val, head, nullptr);
    new_head->next = head;
    head->back = new_head;
    return new_head;
  }
  return head;
}

void Insert_val_before_given_node(Node *node, int val)
{
  Node *before = node->back;

  Node *new_node = new Node(val, node, before);

  node->back = new_node;
  before->next = new_node;
}

int main()
{
  vector<int> a = {2, 7, 9, 5, 6, 12};

  Node *head = Convert_arr_DLL(a);
  int val;
  cout << "\n Enter the value you want to insert, before the desired node in DLL, val = ";
  cin >> val;
  Insert_val_before_given_node(head->next->next, val); // insert value before 9
  cout << "\n The DLL looks like :";
  Print(head);
  return 0;
}