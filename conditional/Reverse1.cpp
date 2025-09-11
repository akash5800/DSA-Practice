#include<iostream>
using namespace std;
int main(){
    int n=12345;
    int res=0;
    while(n>0){
        int lastDig=n%10;
        res=res*10+lastDig;
        n=n/10;
    }
    cout<<"result is:"<<res<<endl;
return 0;
}