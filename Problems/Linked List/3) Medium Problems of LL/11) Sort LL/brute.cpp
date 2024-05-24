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
Node *Sorting_LL(Node *head)
{
  if (head == NULL || head->next == NULL)
    return NULL;

  vector<int> arr;
  Node *temp = head;

  while (temp != NULL)
  {
    arr.push_back(temp->data);
    temp = temp->next;
  }

  sort(arr.begin(), arr.end());
  temp = head;
  int i = 0;
  while (temp != NULL)
  {
    temp->data = arr[i];
    temp = temp->next;
    i++;
  }

  return head;
}
int main()
{
  vector<int> a = {2, 22, 3, 12, 1, 7};
  Node *head = Convert_arr_to_LL(a);

  head = Sorting_LL(head);
  print(head);
  return 0;
}