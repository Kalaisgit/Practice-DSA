// O( N1- N2+ N2 + N1 + N2)
//  TC -> O(2N1 + N2) if N1 > N2
// sc-> O(1)

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

Node *Find_intersection(Node *head1, Node *head2)
{
  if (head1 == NULL || head2 == NULL)
    return NULL;

  Node *t1 = head1;
  Node *t2 = head2;

  while (t1 != t2)
  {
    if (t1 == t2)
    {
      return t1;
    }

    t1 = (t1 == NULL) ? head2 : t1->next;

    t2 = (t2 == NULL) ? head1 : t2->next;
  }
  return t1;
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

  Node *intersection = Find_intersection(head1, head2);

  cout << "\n The intersection of Linked lists happens at the node " << intersection->data;
  return 0;
}