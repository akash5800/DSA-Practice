#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  int data;
  Node* next;
  Node(int val){
    data=val;
    next=NULL;
  }

};
void removeCycle(Node* &head){
  //detect cycle
  Node* slow=head;
  Node* fast=head;
  bool isCycle=false;
  while(fast!=NULL && fast->next!=NULL){
  slow=slow->next;
  fast=fast->next->next;
  if(slow==fast){
    cout<<"cycle detected"<<endl;
    isCycle=true;
    break;
  }
  }
  if(!isCycle){
    cout<<"no cycle present"<<endl;
    return;
  }
  slow=head;
  if(slow==fast){//special case
    while(fast->next!=slow){
      fast=fast->next;
    }
    fast->next=NULL;
  }
  else{
    Node* prev=NULL;
    while(slow!=fast){
      prev=fast;
      slow=slow->next;
      fast=fast->next;
    }
    //breaking the cycle
    prev->next=NULL;
}
}
int main(){
  Node* head=new Node(1);
  head->next=new Node(2);
  head->next->next=new Node(3);
  head->next->next->next=new Node(4);
  head->next->next->next->next=new Node(5);
  //creating a cycle
  head->next->next->next->next->next=head->next;
  removeCycle(head);
  //print the linked list
  Node* temp=head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
  return 0;
}
