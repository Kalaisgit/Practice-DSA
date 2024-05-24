
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
int Find_Length(Node *slow, Node *fast)
{
  int cnt = 1;
  fast = fast->next;
  while (slow != fast)
  {
    cnt++;
    fast = fast->next;
  }
  return cnt;
}

int Detect_a_loop(Node *head)
{
  Node *slow = head;
  Node *fast = head;

  while (fast != NULL && fast->next != NULL)
  {
    slow = slow->next;
    fast = fast->next->next;
    int cnt = 0;
    if (fast == slow)
    {
      return Find_Length(slow, fast);
    }
  }

  return 0; // if no loop
}

int main()
{
  Node *head = new Node(1);
  Node *second = new Node(2);
  Node *third = new Node(3);
  Node *fourth = new Node(4);
  Node *fifth = new Node(5);

  head->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = fifth;
  // Create a loop
  fifth->next = third;

  int length = Detect_a_loop(head);
  cout << "\n Length of Loop in LL = " << length;

  return 0;
}