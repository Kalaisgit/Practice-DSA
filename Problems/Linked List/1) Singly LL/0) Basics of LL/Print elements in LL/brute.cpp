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

Node *Convert_to_LL(vector<int> &a)
{
  Node *head = new Node(a[0]);

  Node *mover = head;

  for (int i = 1; i < a.size(); i++) // always from index 1 as 0 is head
  {
    Node *temp = new Node(a[i]);

    mover->next = temp;

    mover = temp;
  }
  return head;
}

int main()
{
  vector<int> a = {2, 5, 6, 7, 8}; // vector is given, so first convert it to LL

  Node *head = Convert_to_LL(a);

  Node *temp = head; // never tamper with head of LL so assign it to temp

  int cnt = 0;
  int flag = 0;
  int val = 2; // value to search in LL
  while (temp != nullptr)
  {
    if (val == temp->data) // search element
      flag = 1;
    cout << temp->data << " ";
    cnt++; // calculates length of LL
    temp = temp->next;
  }
  cout << "\n Length of the linked list " << cnt;

  (flag == 1) ? cout << "\n element present" : cout << "\n not present";
  return 0;
}