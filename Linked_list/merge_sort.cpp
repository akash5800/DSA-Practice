#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
  Node(int v) : data(v), next(nullptr) {}
};

void printList(Node *head)
{
  while (head)
  {
    cout << head->data;
    if (head->next)
      cout << " -> ";
    head = head->next;
  }
  cout << "\n";
}

Node *splitAtHead(Node *head)
{
  if (!head || !head->next)
    return nullptr;
  Node *slow = head;
  Node *fast = head;
  Node *prev = nullptr;
  while (fast && fast->next)
  {
    prev = slow;
    slow = slow->next;
    fast = fast->next->next;
  }
  if (prev)
    prev->next = nullptr; // split at middle
  return slow;            // slow is start of right half
}

Node *mergeLists(Node *a, Node *b)
{
  Node dummy(0);
  Node *tail = &dummy;
  while (a && b)
  {
    if (a->data <= b->data)
    {
      tail->next = a;
      a = a->next;
    }
    else
    {
      tail->next = b;
      b = b->next;
    }
    tail = tail->next;
  }
  tail->next = (a) ? a : b;
  return dummy.next;
}

Node *mergeSort(Node *head)
{
  if (!head || !head->next)
    return head;
  Node *mid = splitAtHead(head);
  Node *left = mergeSort(head);
  Node *right = mergeSort(mid);
  return mergeLists(left, right);
}

Node *push_front(Node *head, int val)
{
  Node *n = new Node(val);
  n->next = head;
  return n;
}

int main()
{
  Node *head = nullptr;
  head = push_front(head, 2);
  head = push_front(head, 1);
  head = push_front(head, 5);
  head = push_front(head, 3);

  cout << "Before: ";
  printList(head);

  head = mergeSort(head);

  cout << "After:  ";
  printList(head);

  return 0;
}