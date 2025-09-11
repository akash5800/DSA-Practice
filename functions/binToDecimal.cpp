#include<iostream>
using namespace std;
        int binaryTodecimal(int num){
            int n=num;
            int pow=1;
            int decNum=0;
            while(n>0){
                int lastdigit=n%10;
                decNum+=lastdigit*pow;
             n=n/10;
                pow=pow*2;
            }
 return decNum;
        }
int main(){
    cout<<binaryTodecimal(101)<<endl;
    return 0;
}