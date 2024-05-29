// tc->O(3N)
// sc->O(N)
#include <bits/stdc++.h>
class Node
{
public:
  int data;
  Node *next;
  Node *random;

public:
  Node()
  {
    data = 0;
    next = nullptr;
    random = nullptr;
  }
  Node(int data1)
  {
    data = data1;
    next = nullptr;
    random = nullptr;
  }
  Node(int data1, Node *next1, Node *random1)
  {
    data = data1;
    next = next1;
    random = random1;
  }
};
void place_inbetweeen(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    Node *copynode = new Node(temp->data);

    copynode->next = temp->next;

    temp->next = copynode;

    temp = temp->next->next;
  }
}

void Random_connection(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {

    Node *Copynode = temp->next;
    if (temp->random)
      Copynode->random = temp->random->next;
    else
      Copynode->random = NULL;

    temp = temp->next->next;
  }
}

Node *Clone_LL_random_next(Node *head)
{
  if (head == NULL)
  {
    return head;
  }

  place_inbetweeen(head);
  Random_connection(head);

  Node *dummy = new Node(-1);
  Node *res = dummy;
  Node *temp = head;
  while (temp != NULL)
  {
    res->next = temp->next;
    temp->next = temp->next->next;
    res = res->next;
    temp = temp->next;
  }
  return dummy->next;
}
void Print_cloned_LL(Node *cloned_head)
{
  Node *temp = cloned_head;

  while (temp != NULL)
  {
    cout << "Node with data " << temp->data << " ";
    if (temp->random)
      cout << "points to :" << temp->random->data;
    else
      cout << " points to Random : NULL";

    cout << endl;
    temp = temp->next;
  }
}
int main()
{
  Node *head = new Node(1);

  head->next = new Node(2);
  head->next->next = new Node(3);
  head->next->next->next = new Node(4);
  head->next->next->next->next = new Node(5);

  head->random = nullptr;
  head->next->random = head;
  head->next->next->random = head->next;
  head->next->next->next->random = head->next->next->next->next;
  head->next->next->next->next->random = head;

  Node *clone_head = Clone_LL_random_next(head);

  cout << "\nAfter cloning Linked list with random and next pointer, cloned LL looks like" << endl;

  Print_cloned_LL(clone_head);
  return 0;
}