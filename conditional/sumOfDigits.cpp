#include<iostream>
using namespace std;
int main(){
    int n=548;
    int sum=0;
    while(n>0){
        int lastDig=n%10;
        sum=sum+lastDig;
        n=n/10;
    }
cout<<"sum:"<<sum<<endl;
return 0;
}
