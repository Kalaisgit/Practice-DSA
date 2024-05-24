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

public:
  Node(int data1, Node *next1)
  {
    data = data1;
    next = next1;
  }
};

Node *convert_array_2_LL(vector<int> &a)
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

Node *insertion_of_element_in_LL(Node *head, int el, int k)
{
  if (head == NULL)
  {
    if (k == 1)
      return new Node(el);
    else
      return NULL;
  }

  while (k == 1)
  {
    Node *temp = new Node(el, head);
    return temp;
  }

  int cnt = 0;
  Node *temp = head;

  while (temp != nullptr)
  {
    cnt++;

    if (cnt == k - 1)
    {
      Node *kth_node = new Node(el);
      kth_node->next = temp->next;
      temp->next = kth_node;
      break;
    }
    temp = temp->next;
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
int main()
{
  vector<int> a = {2, 4, 5, 6, 8};

  Node *head = convert_array_2_LL(a);

  int el;
  cout << "\n Enter element you wanna insert in LL at kth position:  ";
  cin >> el;

  int k;
  cout << "\n Enter the position where you want your element at in the LL ";
  cin >> k;
  head = insertion_of_element_in_LL(head, el, k);

  cout << "\n The LL after the element is inserted, ";
  Print(head);
}