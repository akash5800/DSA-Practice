#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  int data;
  Node *left, *right;
  Node(int data)
  { // object of a class
    this->data = data;
    this->left = NULL;
    this->right = NULL;
  }
};
void printPreorderHelper(Node *node)
{
  if (node == NULL)
    return;
  cout << node->data << " ";
  printPreorderHelper(node->left);
  printPreorderHelper(node->right);
}
void printInorderHelper(Node*node){
  if(node==NULL){
    return;
  }
  printInorderHelper(node->left);
  cout<<node->data<<" ";
  printInorderHelper(node->right);
}

//for postorder
void printPostorderHelper(Node* node){
  if(node==NULL){
    return;
  }
  printPostorderHelper(node->left);
  printPostorderHelper(node->right);
  cout<<node->data<<" ";
}
int main()
{
  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  cout << "Preorder traversal of binary tree is \n";
  printPreorderHelper(root);
   cout << "\ninorder traversal of binary tree is \n";
   printInorderHelper(root);
   cout << "\npostorder traversal of binary tree is \n";
   printPostorderHelper(root);
  return 0;
}