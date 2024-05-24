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

Node *convert_array_2_LL(vector<int> &a)
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

Node *delete_element_in_LL(Node *head, int el)
{
  if (head == NULL)
    return head;
  if (head->data == el)
  {
    Node *temp = head;
    head = head->next;
    free(temp);
    return head;
  }
  Node *previous = NULL;
  Node *temp = head;

  while (temp != nullptr)
  {

    if (temp->data == el)
    {
      previous->next = previous->next->next;

      free(temp);
      break;
    }
    previous = temp;
    temp = temp->next;
  }

  return head;
}

void Print(Node *head)
{
  Node *temp = head;

  while (temp)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}
int main()
{
  vector<int> a = {2, 4, 5, 6, 8};

  Node *head = convert_array_2_LL(a);

  int el;
  cout << "\n Enter element you wanna delete in LL ";
  cin >> el;
  head = delete_element_in_LL(head, el);

  cout << "\n The LL after element is removed ";
  Print(head);
}