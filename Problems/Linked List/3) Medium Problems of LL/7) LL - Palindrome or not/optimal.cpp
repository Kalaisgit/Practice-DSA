// TC->O(2N)
// SC->O(1)

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
Node *reverse_LL(Node *head) // O(N/2) ->only for second half of LL
{
  if (head == NULL || head->next == NULL)
    return head;

  Node *new_head1 = reverse_LL(head->next);

  Node *front = head->next;
  front->next = head;
  head->next = NULL;

  return new_head1;
}

bool check_palindrome(Node *head)
{
  Node *slow = head;
  Node *fast = head;

  // find middle (n/2)

  while (fast->next != NULL && fast->next->next != NULL)
  // we need m1 element not m2 element, so (fast->next!=null && fast!=NULL) is not used
  {
    // O(N/2)
    slow = slow->next;
    fast = fast->next->next;
  }

  Node *new_head = reverse_LL(slow->next);
  // we should reverse second half of LL

  Node *p1 = head;
  Node *p2 = new_head;
  while (p2 != NULL) // O(N/2)
  {
    if (p1->data != p2->data)
    {
      reverse_LL(new_head);
      return false;
    }
    p1 = p1->next;
    p2 = p2->next;
  }
  reverse_LL(new_head); // putting second half of LL in order //O(N/2)

  return true;
}
int main()
{
  vector<int> a = {1, 2, 3, 5, 2, 1};
  vector<int> b = {1, 2, 3, 3, 2, 1};
  vector<int> c = {1, 2, 3, 2, 1};

  Node *head = Convert_arr_to_LL(a);
  if (check_palindrome(head))
    cout << "\n it is a palindrome";
  else
    cout << "\n not a palindrome";

  head = Convert_arr_to_LL(b);
  if (check_palindrome(head))
    cout << "\n it is a palindrome";
  else
    cout << "\n not a palindrome";

  head = Convert_arr_to_LL(c);
  if (check_palindrome(head))
    cout << "\n it is a palindrome";
  else
    cout << "\n not a palindrome";

  return 0;
}