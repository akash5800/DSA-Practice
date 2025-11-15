#include<iostream>
using namespace std;

int friendPairing(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return friendPairing(n-1) + (n-1) * friendPairing(n-2);
}

int main(){
    cout << friendPairing(4) << endl; // Output: 10
    return 0;
}