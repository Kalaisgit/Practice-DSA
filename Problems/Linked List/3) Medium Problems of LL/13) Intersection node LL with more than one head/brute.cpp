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
  Node()
  {
    data = 0;
    next = nullptr;
  }
  Node(int data1, Node *next1)
  {
    data = data1;
    next = next1;
  }
};
void Insertnode(Node *&head, int data1)
{
  /*passed by value as the head must not alter in main,
   as the changes are made here in this function*/

  Node *new_node = new Node(data1);
  if (head == NULL)
  {
    head = new_node;
    return;
  }

  Node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = new_node;
  return;
}
Node *Find_Intersection(Node *head1, Node *head2)
{
  unordered_map<Node *, int> mpp;

  Node *temp = head1;
  while (temp != NULL)
  {
    mpp[temp] = 1;
    temp = temp->next;
  }
  temp = head2;
  while (temp != NULL)
  {
    if (mpp.find(temp) != mpp.end())
      return temp;

    temp = temp->next;
  }
  return NULL;
}
int main()
{
  Node *head = nullptr;

  Insertnode(head, 1);
  Insertnode(head, 4);
  Insertnode(head, 2);
  Insertnode(head, 4); // connect list 2 to this node
  Insertnode(head, 5);

  Node *head1 = head; // head of list1 //1->4->2->4->5;

  head = head->next->next->next; // 4;

  Node *sechead = NULL;
  Insertnode(sechead, 7);
  Node *head2 = sechead;
  head2->next = head; // 7->4

  Node *intersection = Find_Intersection(head1, head2);

  cout << "\n The intersection of Linked lists happens at the node " << intersection->data;
  return 0;
}