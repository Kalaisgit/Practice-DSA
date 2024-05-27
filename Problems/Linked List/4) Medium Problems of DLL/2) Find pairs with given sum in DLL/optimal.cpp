// tc->O(N+N) -> O(2N)
#include <bits/stdc++.h>
class Node
{

public:
  int data;
  Node *next;
  Node *prev;

public:
  Node(int data1, Node *next1, Node *prev1)
  {
    data = data1;
    next = next1;
    prev = prev1;
  }

public:
  Node(int data1)
  {
    data = data1;
    next = nullptr;
    prev = nullptr;
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
vector<vector<int>> pair_nodes(Node *head, int sum)
{
  vector<vector<int>> result;
  Node *right = head;
  Node *left = head;

  while (right->next != NULL) // O(N)
  {
    right = right->next;
  }
  while (left->data < right->data) // O(N)
  {
    int current_sum = left->data + right->data;
    if (current_sum == sum)
    {
      result.push_back({left->data, right->data});
      left = left->next;
      right = right->prev;
    }
    else if (current_sum < sum)
    {
      left = left->next;
    }
    else
    {
      right = right->prev;
    }
  }
  return result;
}

int main()
{
  vector<int> a = {1, 2, 3, 4, 5, 6};

  Node *head = Convert_arr_DLL(a);

  cout << "\n The DLL looks like :";
  Print(head);

  int sum;
  cout << "\n enter the sum : ";
  cin >> sum;

  vector<vector<int>> pair = pair_nodes(head, sum);

  for (auto it : pair)
  {
    for (int el : it)
    {
      cout << el << " ";
    }
    cout << endl;
  }

  return 0;
}