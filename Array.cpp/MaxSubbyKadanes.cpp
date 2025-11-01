#include<iostream>
#include<climits>
using namespace std;
void Maxsum(int *arr,int n){
    int max_sum=INT_MIN;
    int curr_sum=0;
    for(int i=0;i<n;i++){
        curr_sum+=arr[i];
        max_sum=max(max_sum,curr_sum);
        if(curr_sum<0){
            curr_sum=0;
        }
       
    } 
    cout<<"max sub is:"<<max_sum<<endl;
}
int main(){
    int arr[6]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    Maxsum(arr,n);
    return 0;
}