#include <bits/stdc++.h>
struct Node // class Node can also be used if concepts of OOP has to be used
{

public:
  int data;
  Node *next;

public:
  Node(int data1, Node *next1) // constructor as has same class name
  {
    data = data1;
    next = next1;
  }

  Node(int data1) // constructor overloaded with different argument
  // nullptr can be assigned inside the constructor too
  {
    data = data1;
    next = nullptr;
  }
};

int main()
{
  vector<int> a = {12, 21, 31, 14, 15};

  Node *y = new Node(a[0], nullptr);
  cout << y << endl; // Print the value of the pointer

  cout << y->data << " " << y->next << endl;

  // another way of declaring
  Node obj1 = Node(a[3], nullptr); // created a object for the class Node
  Node *z = &obj1;                 // pointer variable points to memory of node created
  cout << z->data << " " << z->next << endl;

  vector<int> b = {13, 14, 5, 7};
  Node *x = new Node(b[0]);
  cout << x->data << " " << x->next;

  return 0;
}