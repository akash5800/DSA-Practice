#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a year";
    cin>>x;
    if(x%400==0){
        cout<<"leap year";
    }
    else if(x%4==0 && x%100!=0){
        cout<<"leap year";
    }
    else{
        cout<<"not a leap year";
    }
    }

