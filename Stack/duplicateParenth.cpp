//** O(n) complexity */
#include<bits/stdc++.h>
using namespace std;
bool isDuplicate(string str){
  stack<char>s;
  for(int i=0;i<str.size();i++){
    char ch=str[i];
    if(ch!=')'){ //till closing bracket not comes once
      s.push(ch);
    }
 else{
  if(s.top()=='('){
    return true; //duplicate found
  }
while(s.top()!='('){
  s.pop();
}
s.pop(); //pop the opening bracket
 }
  }
  return false; //no duplicate found
}
int main(){
  string s1="((a+b))"; // Should return 1 (true)
  string s2="(a+(b)/c)"; // Should return 0 (false)
  cout<<isDuplicate(s1)<<endl;
  cout<<isDuplicate(s2)<<endl;
}