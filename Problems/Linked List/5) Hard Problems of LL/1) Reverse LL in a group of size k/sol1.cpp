// tc->O(N+N) -> O(2N)
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

Node *convert_to_Linkedlist(vector<int> &a)
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

void Print(Node *head)
{
  Node *temp = head;

  while (temp != nullptr)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}
Node *Reverse_LL(Node *head)
{
  if (head == NULL || head->next == NULL)
  {
    return head;
  }
  Node *prev = NULL;
  Node *temp = head;
  while (temp != NULL)
  {
    Node *after = temp->next;

    temp->next = prev;
    prev = temp;
    temp = after;
  }
  return prev;
}
Node *get_kth_node(Node *temp, int k)
{
  k = k - 1;
  while (temp != NULL && k > 0)
  {
    k--;
    temp = temp->next;
  }
  return temp;
}
Node *reverse_LL_group_k(Node *head, int k)
{
  Node *temp = head;
  Node *prev_last = NULL;

  while (temp != NULL)
  {
    Node *kth_node = get_kth_node(temp, k);
    if (kth_node == NULL)
    {
      if (prev_last)
        prev_last->next = temp;

      break;
    }
    Node *nextnode = kth_node->next;
    kth_node->next = NULL;

    Reverse_LL(temp);

    if (temp == head)
    {
      head = kth_node;
    }
    else
    {
      prev_last->next = kth_node;
    }

    prev_last = temp;
    temp = nextnode;
  }
  return head;
}

int main()
{
  vector<int> a = {1, 2, 3, 4, 5, 6, 7};

  Node *head = convert_to_Linkedlist(a);

  cout << "\n The DLL looks like :";
  Print(head);

  int k;
  cout << "\n enter k : ";
  cin >> k;

  head = reverse_LL_group_k(head, k);

  cout << "\n after reversing LL as k groups, LL looks like :";
  Print(head);

  return 0;
}