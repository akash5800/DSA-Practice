// by brute froce approach
#include<iostream>
#include <climits> 
using namespace std;
void maxSum(int *arr,int n){
    int max_sum=INT_MIN;
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            int curr_Sum=0;
            for(int i=start;i<=end;i++){
                curr_Sum+=arr[i];
            }
            cout<<curr_Sum<<" ";
            max_sum=max(max_sum,curr_Sum);
        }
        cout<<endl;
    }
    cout<<"max sum is"<<max_sum<<endl;
}
int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    maxSum(arr,n);
    return 0;
}