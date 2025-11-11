#include<iostream>
#include<string>
using namespace std;
int tilingProbelem(int n){
  if(n==0 ||n==1){
    return 1;
  }
  int ans1=tilingProbelem(n-1);
  int ans2=tilingProbelem(n-2);
  return ans1+ans2;
}
int main(){
  int n=3;
  cout<<tilingProbelem(5)<<endl;
}