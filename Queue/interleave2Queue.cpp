#include<iostream>
#include<queue>
using namespace std;
void interleave(queue<int>& orig){
  queue<int>q1;
  int n=orig.size();
for(int i=0;i<n/2;i++){
  q1.push(orig.front());
  orig.pop();
}
while(!q1.empty()){
orig.push(q1.front());
q1.pop();
orig.push(orig.front());
orig.pop();
}
}

int main(){
  queue<int> orig;
  for(int i=1;i<=10;i++){
    orig.push(i);
  }
interleave(orig);
while(!orig.empty()){
  cout<<orig.front()<<" ";
  orig.pop();
}
}