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

Node *Convert_to_Linkedlist(vector<int> &a)
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

Node *Remove_head(Node *head)
{
  if (head == NULL)
    return head;

  Node *temp = head;

  head = head->next;

  free(temp);
  // delete temp;

  return head;
}

Node *Remove_tail(Node *head)
{

  if (head == NULL || head->next == NULL)
    return NULL;

  Node *temp = head; // copy of head

  while (temp->next->next != nullptr)
  {
    temp = temp->next;
  }

  delete temp->next;
  temp->next = nullptr;

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
int main()
{
  vector<int> a = {2, 5, 6, 8, 9};

  Node *head = Convert_to_Linkedlist(a);
  cout << "\n After converting the array to LL, the head of the LL is " << head->data << endl;

  cout << "\n After converting the array to LL, the LL looks like ";
  Print(head);

  head = Remove_head(head);
  cout << "\n After removing head of the LL, the new head of the linked list is " << head->data << endl;
  cout << "\n After removing head of the LL, the LL looks like ";
  Print(head);

  head = Remove_tail(head);
  cout << "\n After removing tail of the LL, the head is " << head->data << endl;
  cout << "\n After removing tail of the LL, the LL looks like ";
  Print(head);

    return 0;
}