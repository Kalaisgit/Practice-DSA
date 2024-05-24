// tc-> O(2*len) worstcase, len->sizeof LL
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

  Node *temp = head;
  int cnt = 0;
  while (temp != NULL)
  {
    cnt++;
    temp = temp->next;
  }
  int n = cnt / 2; //(middle is cnt/2 + 1), we have reach before that, so n/2
  temp = head;
  while (temp != NULL)
  {
    n--;
    if (n == 0)
      break;

    temp = temp->next;
  }

  Node *node_to_delete = temp->next;

  temp->next = temp->next->next;
  free(node_to_delete);

  return head;
}
int main()
{
  vector<int> a = {2, 3, 4, 6, 7};
  Node *head = Convert_arr_to_LL(a);

  head = Delete_middle_LL(head);
  print(head);
  return 0;
}