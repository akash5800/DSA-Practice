#include<iostream>
#include<stack>
using namespace std;

//push at bottom of stack
void pushAtBottom(stack<int> &s,int val){
if(s.empty()){
  s.push(val); // stack si empty, push the value at bottom
  return;
}
  int temp=s.top();
  s.pop();
  pushAtBottom(s,val);
  s.push(temp);
};
int main(){
  stack<int> s;
  s.push(3);
  s.push(2);
  s.push(1);
  pushAtBottom(s,4);
  while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
  }
  cout<<endl;
  return 0;
}