#include<iostream>
#include<cstring>
using namespace std;
bool isvalidpal(char word[],int n){
    int st=0,end=n-1;
    while(st<end){
        if(word[st]!=word[end]){
            cout<<"not a valid palindrome"<<endl;
            return false;
        }
        st++;
        end--;
    }
    cout<<"valid palindrome\n";
    return true;
}
int main(){
    char str[]="racecar";
    isvalidpal(str,strlen(str));
    return 0;
}