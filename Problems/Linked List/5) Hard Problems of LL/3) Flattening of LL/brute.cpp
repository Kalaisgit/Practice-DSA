#include <bits/stdc++.h>
class Node
{
public:
  int data;
  Node *next;
  Node *child;

public:
  Node()
  {
    data = 0;
    next = nullptr;
    child = nullptr;
  }
  Node(int data1)
  {
    data = data1;
    next = nullptr;
    child = nullptr;
  }
  Node(int data1, Node *next1, Node *child1)
  {
    data = data1;
    next = next1;
    child = child1;
  }
};
void printOriginalLinkedList(Node *head, int depth)
{

  while (head != nullptr)
  {
    cout << head->data;

    // If child exists, recursively
    // print it with indentation
    if (head->child)
    {
      cout << " -> ";
      printOriginalLinkedList(head->child, depth + 1);
    }

    if (head->next)
    {
      cout << endl;
    }
    head = head->next;
  }
}

Node *Convert_arr_LL(vector<int> &arr)
{
  Node *head = new Node(arr[0]);
  Node *current = head;
  for (int i = 1; i < arr.size(); i++)
  {
    Node *temp = new Node(arr[i]);

    current->child = temp;
    current = temp;
  }
  return head;
}
void printLinkedList(Node *flat_head)
{
  Node *temp = flat_head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->child;
  }
}
Node *FlatteningLinkedList(Node *head)
{
  vector<int> arr;

  Node *temp = head;

  while (temp != NULL)
  {
    Node *t1 = temp;
    while (t1 != NULL)
    {
      arr.push_back(t1->data);
      t1 = t1->child;
    }
    temp = temp->next;
  }

    return Convert_arr_LL(arr);
}
int main()
{
  Node *head = new Node(1);
  head->child = new Node(10);

  head->next = new Node(2);
  head->next->child = new Node(20);
  head->next->child->child = new Node(21);

  head->next->next = new Node(3);
  head->next->next->child = new Node(30);
  head->next->next->child->child = new Node(31);
  head->next->next->child->child->child = new Node(32);

  cout << "\nbefore flattening LL" << endl;
  printOriginalLinkedList(head, 0);

  Node *flat_head = FlatteningLinkedList(head);

  cout << "\nafter flattening LL : " << endl;
  printLinkedList(flat_head);

  return 0;
}