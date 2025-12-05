#include <bits/stdc++.h>
using namespace std;

// basic structure
class Node
{
public:
  int val;
  Node *next;
  Node(int data)
  {
    val = data;
    next = NULL;
  }
};

// inserting at head
// TC= O(1)
void insertAtHead(Node *&head, int val)
{
  Node *new_node = new Node(val);
  new_node->next = head;
  head = new_node;
}

//+++ inserting at last +++
// TC= O(n)
void insertAtTail(Node *&head, int val)
{
  Node *new_node = new Node(val);
  Node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = new_node;
}

//+++ inserting at kth position
void InsertAtPosition(Node *&head, int val, int pos)
{
  Node *new_node = new Node(val);
  Node *temp = head;
  for (int i = 0; i < pos - 1; i++)
  {
    temp = temp->next;
  }
  // reached at pos-1 position ie left of newnode
  new_node->next = temp->next;
  temp->next = new_node;
}

//update at kth position
void updateAtPosition(Node* &head,int k,int val){
  Node* temp=head;
  int curr_pos=0;
  while(curr_pos!=k){
    temp=temp->next;
    curr_pos++;
  }
  temp->val=val;

}

//deletion at starting
void deleteAtHead(Node* &head){
  Node* temp=head;
  head=head->next;
  free(temp);
}

//deletion at last
//tc=O(n)
void deleteAtLast(Node* &head){
  Node* second_last=head;
  while(second_last->next->next!=NULL){
    second_last=second_last->next;
  }
  Node* temp=second_last->next;
  second_last->next=NULL;
  free(temp);
}

//deletion at kth position
void deleteAtPosition(Node* &head,int k){
  Node* temp=head;
  for(int i=0;i<k-1;i++){
    temp=temp->next;
  }
  Node* todelete=temp->next;
  temp->next=temp->next->next;
  free(todelete);

}
//display function
void display(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->val << " ";
    temp = temp->next;
  }
  cout << "NUll" << endl;
}

//**for calling basic structure++++

/*int main(){
  Node* n=new Node(1);
  cout<<n->val<<endl;
  cout<<n->next<<endl;
  return 0;
}
  */

// for inserting at head
int main()
{
  Node *head = NULL;
  // display(head);
  insertAtHead(head, 1);
  display(head);
  insertAtHead(head, 2);
  display(head);
  insertAtTail(head, 3);
  display(head);
  InsertAtPosition(head, 6, 2);
  display(head);
  updateAtPosition(head,2,10);
  display(head);

  deleteAtHead(head);
  display(head);
  deleteAtLast(head);
  display(head);
  deleteAtPosition(head,1);
  display(head);
  return 0;
}
