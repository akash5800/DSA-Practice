//**Print the digits of a given number in reverse using while loop */

#include<iostream>
using namespace std;
int main(){
    int n=50000;
    while(n>0){
        int lastDig=n%10;
        cout<<lastDig;
        n=n/10;
    }
return 0;
}

  