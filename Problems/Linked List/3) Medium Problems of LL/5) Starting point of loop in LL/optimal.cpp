// TC ->O(N+N) = O(2N)
// SC -> O(N)

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

Node *Detect_starting_Node_of_loop(Node *head)
{

  Node *slow = head;
  Node *fast = head;

  while (fast != NULL && fast->next != NULL)
  {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast)
    {
      slow = head;
      while (slow != fast)
      {
        slow = slow->next;
        fast = fast->next;
      }
      return slow;
    }
  }

  return NULL; // if no loop
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

  Node *start = Detect_starting_Node_of_loop(head);
  cout << "\n Loop starts at Node " << start->data;

  return 0;
}