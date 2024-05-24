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
Node *Find_Intersection(Node *t1, Node *t2, int d)
{
  while (d) // O(N1-N2)
  {
    d--;
    t2 = t2->next;
  }
  while (t1 != NULL && t2 != NULL) // O(N2) , N2->size of smaller LL
  {
    if (t1 == t2)
      return t2; // t2 or t1
    t1 = t1->next;
    t2 = t2->next;
  }
  return nullptr;
}
Node *Find_length(Node *head1, Node *head2)
{
  Node *temp1 = head1;
  Node *temp2 = head2;
  int N1 = 0;
  int N2 = 0;
  while (temp1 != NULL) // O(N1)
  {
    N1++;
    temp1 = temp1->next;
  }
  while (temp2 != NULL) // O(N2)
  {
    N2++;
    temp2 = temp2->next;
  }

  if (N2 > N1)
    return Find_Intersection(head1, head2, N2 - N1);
  else
    return Find_Intersection(head2, head1, N1 - N2); // N1>N2

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

  Node *intersection = Find_length(head1, head2);

  cout << "\n The intersection of Linked lists happens at the node " << intersection->data;
  return 0;
}