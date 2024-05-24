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

bool check_palindrome(Node *head)
{
  stack<int> st;
  Node *temp = head;
  while (temp != NULL)
  {
    st.push(temp->data);
    temp = temp->next;
  }
  temp = head;
  while (temp != NULL)
  {
    if (st.top() != temp->data)
      return false;

    temp = temp->next;
    st.pop();
  }
  return true;
}
int main()
{
  vector<int> a = {1, 2, 3, 3, 2, 1};

  Node *head = Convert_arr_to_LL(a);

  if (check_palindrome(head))
    cout << "it is a palindrome";
  else
    cout << "\n not a palindrome";
  return 0;
}