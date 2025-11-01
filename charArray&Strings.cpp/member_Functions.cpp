#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="apna college";
    cout<<str.length()<<endl;
    cout<<str[2]<<endl;
    // or
    cout<<str.at(2)<<endl;
    cout<<str.substr(1,5)<<endl;// from 1 index to next five 
    cout<<str.find("college");
    cout<<endl;
    return 0;
}