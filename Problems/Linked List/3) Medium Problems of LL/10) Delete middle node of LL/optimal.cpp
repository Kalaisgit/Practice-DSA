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
};

Node *Convert_arr_to_LL(vector<int> &a)
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
void print(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}
Node *Delete_middle_LL(Node *head)
{
  if (head == NULL || head->next == NULL)
    return NULL;

  Node *fast = head;
  Node *slow = head;

  fast = fast->next->next;

  while (fast != NULL && fast->next != NULL)
  {
    slow = slow->next;
    fast = fast->next->next;
  }

  Node *delete_node = slow->next;

  slow->next = slow->next->next;
  free(delete_node);
  return head;
}
int main()
{
  vector<int> a = {2, 3, 4, 5, 6, 7};
  Node *head = Convert_arr_to_LL(a);

  head = Delete_middle_LL(head);
  print(head);
  return 0;
}