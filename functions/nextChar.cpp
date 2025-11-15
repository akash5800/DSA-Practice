#include<iostream>
using namespace std;
char nextChar(char ch){
    if(ch=='z'){
        return 'a';
    }
    else{
        return ch+1;
    }
    return ch;
}
int main(){
    cout << nextChar('z') << endl;
    return 0;
}