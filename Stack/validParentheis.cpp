#include<bits/stdc++.h>
using namespace std;

bool isValid(string str){
  stack<char> s;
  for(int i = 0; i < str.size(); i++){
    char ch = str[i];
    
    // 1. If opening bracket, push to stack
    if(ch == '(' || ch == '{' || ch == '['){
      s.push(ch);
    } 
    else {
      // 2. If closing bracket, first check if stack is empty
      if(s.empty()){
        return false;
      }
      
      // 3. Check for matching pair
      char top = s.top();
      if((top == '(' && ch == ')') || 
         (top == '[' && ch == ']') || 
         (top == '{' && ch == '}')){
        s.pop();
      } else {
        // Mismatched bracket (e.g., "(]")
        return false;
      }
    }
  }
  // 4. If stack is empty, all brackets were matched correctly
  return s.empty();
}

int main(){
  string s1 = "([}])";  // Should return 0 (false)
  string s2 = "([{}])"; // Should return 1 (true)
  cout << isValid(s1) << endl;
  cout << isValid(s2) << endl;
  return 0;
} 