#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool isPrime=true;
     for(int x=2;x<=sqrt(n);x++){
        if(n%x==0){
            isPrime=false;
            break;
        }}
         if(isPrime){
            cout<<"number is prime"<<endl;
         }
         else
         cout<<"not prime"<<endl;
     }
    