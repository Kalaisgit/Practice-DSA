// Tc->O(2N)
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
Node *Find_new_tail(Node *head, int n) // O(N)
{
  Node *t = head;
  while (n > 1 && t != NULL)
  {
    n = n - 1;
    t = t->next;
  }
  return t;
}
Node *Rotate_LL(Node *head, int k)
{
  if (k == 0)
    return head;

  Node *tail = head;

  int cnt = 1;
  while (tail->next != NULL) // O(N)
  {
    cnt = cnt + 1;
    tail = tail->next;
  }

  if (k % cnt == 0)
    return head;

  k = k % cnt;

  Node *new_tail = Find_new_tail(head, cnt - k);

  tail->next = head;

  Node *new_head = new_tail->next;
  new_tail->next = NULL;

  return new_head;
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

  head = Rotate_LL(head, k);

  cout << "\n after rotating LL for k times, LL looks like :";
  Print(head);

  return 0;
}