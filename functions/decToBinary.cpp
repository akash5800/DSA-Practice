#include<iostream>
using namespace std;
void decToBinary(int n){
    // int n=decNum;
    int pow=1;
    int binNum=0;
    while(n>0){
        int rem=n%2;
        binNum +=rem * pow;
        n=n/2;
        pow=pow*10;

    }
    cout<<binNum<<endl;
}
int main(){
    decToBinary(5);
    return 0;
}