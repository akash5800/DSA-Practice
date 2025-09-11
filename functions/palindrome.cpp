#include<iostream>
using namespace std;
int reverse(int n){
    int reversed=0;
    while(n>0){
        int digit=n%10;
        reversed=reversed*10+digit;
        n=n/10;
    }
    return reversed;
}
bool ispalindrome(int num){
     int revnum=reverse(num);
     return num==revnum;
}
int main(){
    ispalindrome(133)?cout<<"palindrome":cout<<"not a palindrome";
    return 0;
}