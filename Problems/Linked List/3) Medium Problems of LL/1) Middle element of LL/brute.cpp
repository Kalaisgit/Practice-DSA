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
Node *Find_Median(Node *head)
{
  Node *temp = head;
  int n = 0;
  while (temp != NULL)
  {
    n++;

    temp = temp->next;
  }

  int mid = (n / 2) + 1;

  Node *mid_node = head;
  while (mid_node != NULL)
  {
    mid--;
    if (mid == 0)
      break;
    mid_node = mid_node->next;
  }
  return mid_node;
}
int main()
{
  vector<int> a = {2, 5, 7, 10, 4, 6, 9};
  vector<int> b = {6, 8, 4, 2, 5, 16};
  Node *head = Convert_arr_DLL(b);
  cout << "\n The DLL looks like :";
  Print(head);
  Node *median = Find_Median(head);
  cout << "\n The median of the LL is " << median->data;
  return 0;
}