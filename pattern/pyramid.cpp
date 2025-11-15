#include<iostream>
using namespace std;
int main(){
    int n=6;
    for(int i=1;i<=n;i++){
        // loop for spaces
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    // loop for stars
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
    }
}