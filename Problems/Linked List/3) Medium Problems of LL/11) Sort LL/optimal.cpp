// O(log N * (N+N/2)) time and O(1) memory

#include <bits/stdc++.h>
class ListNode
{
public:
  int data;
  ListNode *next;

public:
  ListNode(int data1)
  {
    data = data1;
    next = nullptr;
  }
};
ListNode *Convert_arr_to_LL(vector<int> &a)
{
  ListNode *head = new ListNode(a[0]);

  ListNode *mover = head;
  for (int i = 1; i < a.size(); i++)
  {
    ListNode *temp = new ListNode(a[i]);
    mover->next = temp;
    mover = temp;
  }
  return head;
}
void print(ListNode *head)
{
  ListNode *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}

ListNode *Merge(ListNode *list1, ListNode *list2)
{
  ListNode *dummy = new ListNode(-1);

  ListNode *temp = dummy;

  while (list1 != NULL && list2 != NULL)
  {
    if (list1->data < list2->data)
    {
      temp->next = list1;
      temp = list1;
      list1 = list1->next;
    }
    else
    {
      temp->next = list2;
      temp = list2;
      list2 = list2->next;
    }
  }

  if (list1)
    temp->next = list1;
  if (list2)
    temp->next = list2;

  ListNode *head = dummy->next;
  delete dummy;
  return head;
}

ListNode *Find_Middle(ListNode *head) // O(N/2)
{
  ListNode *slow = head;
  ListNode *fast = head->next; // as we need m1 for even number of elements in LL

  while (fast != NULL && fast->next != NULL)
  {
    slow = slow->next;
    fast = fast->next->next;
  }

  return slow;
}

ListNode *sortList(ListNode *head)
{
  if (head == NULL || head->next == NULL)
    return head;

  ListNode *middle = Find_Middle(head);

  ListNode *left_head = head;
  ListNode *right_head = middle->next;

  middle->next = NULL;

  left_head = sortList(left_head); // log N
  right_head = sortList(right_head);

  return Merge(left_head, right_head); // O(N)
}
int main()
{
  vector<int> a = {2, 22, 3, 12, 1, 7};
  ListNode *head = Convert_arr_to_LL(a);

  head = sortList(head);
  print(head);
  return 0;
}