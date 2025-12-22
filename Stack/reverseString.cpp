#include<iostream>
#include<string>
#include<stack>
using namespace std;
void reverseStirng(string &str){
  stack<char>s;
  for(int i=0;i<str.length();i++){
    s.push(str[i]);
  }
  while(!s.empty()){
    cout<<s.top();
    s.pop();
  }

};
int main(){
  // string str="akash";
  string str;
  cout<<"Enter a string"<<endl;
  getline(cin,str);
  reverseStirng(str);
  cout<<endl;
  return 0;
}
