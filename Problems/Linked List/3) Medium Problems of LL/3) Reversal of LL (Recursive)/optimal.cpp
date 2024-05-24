// TC ->O(N)
// SC -> O(1)

#include <bits/stdc++.h>
class Node
{

public:
  int data;
  Node *next;

public:
  Node(int data1, Node *next1)
  {
    data = data1;
    next = next1;
  }

public:
  Node(int data1)
  {
    data = data1;
    next = nullptr;
  }
};

Node *Convert_arr_DLL(vector<int> &a)
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
Node *Reversal_LL(Node *head)
{
  // Base Case
  if (head == NULL || head->next == nullptr)
    return head;

  Node *new_head = Reversal_LL(head->next);

  Node *front = head->next;
  front->next = head;
  head->next = NULL;

  // call 4: 2,5,7,10; head = 2; front = 5, 5 points to 2, 2 points to null, thus reversed
  // call 3: 5,7,10; head = 5; front = 7, 7 points to 5, 5 points to null
  // call 2 : 7,10; head = 7;  front = 10, 10 points to 7, 2 points to null
  // call 1 : 10; New_head = 10; returns 10 with base case true

  return new_head;
}
int main()
{
  vector<int> a = {2, 5, 7, 10};
  Node *head = Convert_arr_DLL(a);
  cout << "\n The DLL looks like :";
  Print(head);
  head = Reversal_LL(head);
  cout << "\n The DLL looks like :";
  Print(head);
  return 0;
}