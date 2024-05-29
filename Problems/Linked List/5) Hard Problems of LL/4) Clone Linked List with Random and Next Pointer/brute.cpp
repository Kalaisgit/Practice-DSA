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
Node *Clone_LL_random_next(Node *head)
{
  if (head == NULL)
  {
    return head;
  }

  unordered_map<Node *, Node *> mpp;

  Node *temp = head;

  while (temp != NULL)
  {

    Node *new_node = new Node(temp->data);

    mpp[temp] = new_node;
    temp = temp->next;
  }

  temp = head;
  while (temp != NULL)
  {
    Node *copy_node = mpp[temp];

    copy_node->next = mpp[temp->next];

    copy_node->random = mpp[temp->random];

    temp = temp->next;
  }
  return mpp[head];
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