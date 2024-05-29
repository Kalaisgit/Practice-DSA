// TC-> O(2NM)
// SC -> recursive stack space O(N)

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
Node *Merge(Node *list1, Node *list2)
{
  Node *dummy = new Node(-1);
  Node *res = dummy;

  while (list1 != NULL && list2 != NULL)
  {
    if (list1->data < list2->data)
    {
      res->child = list1;
      res = res->child;
      list1 = list1->child;
    }
    else
    {
      res->child = list2;
      res = res->child;
      list2 = list2->child;
    }
    if (list1)
      res->child = list1;
    else
      res->child = list2;

    res->next = NULL;
  }
  return dummy->child;
}
Node *FlatteningLinkedList(Node *head)
{
  if (head->next == NULL || head == nullptr)
    return head;

  Node *merged_head = FlatteningLinkedList(head->next);

  return Merge(head, merged_head);
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