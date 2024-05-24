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
Node *Delete_Nth_node_from_end_of_LL(Node *head, int n)
{
  Node *temp = head;
  int cnt = 0;
  while (temp != NULL)
  {
    cnt++;
    temp = temp->next;
  }

  if (cnt == n)
  {
    Node *new_head = head->next;
    free(head);
    return new_head;
  }
  int res = cnt - n;

  temp = head;
  while (temp != NULL)
  {
    res--;
    if (res == 0)
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
  vector<int> a = {2, 3, 4, 5, 6, 7};
  Node *head = Convert_arr_to_LL(a);

  int n;
  cout << "\n enter the node you want to delete from end of LL, N = ";
  cin >> n;

  head = Delete_Nth_node_from_end_of_LL(head, n);
  print(head);
  return 0;
}