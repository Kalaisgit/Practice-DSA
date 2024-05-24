#include <bits/stdc++.h>
class Node
{

public:
  int data;
  Node *next;
  Node *back;

public:
  Node(int data1, Node *next1, Node *back1)
  {
    data = data1;
    next = next1;
    back = back1;
  }

public:
  Node(int data1)
  {
    data = data1;
    next = nullptr;
    back = nullptr;
  }
};

Node *Convert_arr_DLL(vector<int> &a)
{
  Node *head = new Node(a[0]);

  Node *previous = head;

  for (int i = 1; i < a.size(); i++)
  {
    Node *temp = new Node(a[i], nullptr, previous); // backward link from previous to temp

    previous->next = temp; // forward link from previous to temp
    // hence two way links

    previous = temp;
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
Node *Delete_head_DLL(Node *head)
{
  Node *previous = head;
  if (head == NULL)
    return NULL;
  if (head->next == nullptr && head->back == nullptr)
  {
    Node *temp = head;
    free(temp);
    return temp;
  }
  else if (head->next != NULL && head->back == NULL)
  {
    head = head->next;
    previous->next = nullptr;
    head->back = nullptr;
    free(previous);
  }
  return head;
}
Node *Delete_tail_DLL(Node *head)
{
  Node *tail = head;
  if (head == NULL)
    return NULL;
  if (head->next == nullptr && head->back == nullptr)
  {
    Node *temp = head;
    free(temp);
    return temp;
  }
  else if (head->next != nullptr && head->back == nullptr)
  {
    while (tail->next != nullptr)
    {
      tail = tail->next;
    }
    Node *before = tail->back;
    before->next = NULL;
    tail->back = NULL;
    free(tail);
  }
  return head;
}

Node *Delete_kth_node_DLL(Node *head, int k)
{
  Node *current = head;

  int cnt = 0;
  while (current != nullptr)
  {
    cnt++;

    if (cnt == k)
      break;

    current = current->next;
  }
  Node *before = current->back;
  Node *after = current->next;

  if (head == NULL)
    return NULL;
  else if (before == NULL && after == NULL && k == 1)
  {
    // LL with one element
    free(current);
    return NULL;
  }
  else if (before == NULL)
  {
    // delete head //k=1
    return Delete_head_DLL(head);
  }
  else if (after == NULL)
  {
    // delete tail //k = a.size();
    return Delete_tail_DLL(head);
  }
  else
  {
    // mid elements , k = 2,3,...n-1 , n is size of LL
    before->next = after;
    after->back = before;

    current->next = nullptr;
    current->back = nullptr;
    free(current);
  }

  return head;
}
int main()
{
  vector<int> a = {2, 7, 9, 5, 6, 12};

  Node *head = Convert_arr_DLL(a);
  int k;
  cout << "\n Enter the node you want to delete, k = ";
  cin >> k;
  head = Delete_kth_node_DLL(head, k);
  cout << "\n The DLL looks like :";
  Print(head);
  return 0;
}