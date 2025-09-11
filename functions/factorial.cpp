#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number";
//     cin>>n;
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     cout<<"factorial is"<<fact<<endl;
// }

//using function
int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    cout<<"factorial is:"<<fact<<endl;
    return fact;
}
int main(){
    factorial(5);
    return 0;
} 