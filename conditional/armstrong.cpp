#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    int cube=0;
    while(n>0){
        int lastDig=n%10;
        cube=cube+lastDig*lastDig*lastDig;
        n=n/10;
    }
    if(n==cube){
        cout<<"armstrong number"<<endl;
    }
    else{
    cout<<"not armstrong number"<<endl;
    }
    return 0;
}