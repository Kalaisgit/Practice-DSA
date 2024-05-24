// TC-> O(N)
// SC -> O(N) - recursive stack space
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
int Adding_1(Node *temp)
{

  if (temp == NULL)
  {
    return 1;
  }
  int carry = Adding_1(temp->next);

  temp->data = temp->data + carry;
  if (temp->data == 10)
  {
    temp->data = 0;
    return 1;
  }
  return 0;
}
Node *Add1(Node *head)
{
  Node *temp = head;

  int carry = Adding_1(temp);

  if (carry == 1)
  {
    Node *new_head = new Node(carry);
    new_head->next = head;
    return new_head;
  }
  return head;
}

int main()
{
  vector<int> a = {9, 9, 9};

  Node *head = Convert_arr_to_LL(a);

  head = Add1(head);

  cout << "\n LL after adding 1, LL looks like ";
  print(head);
  return 0;
}