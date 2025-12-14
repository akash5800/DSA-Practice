#include<iostream>
#include<climits>
using namespace std;
void Maxsum(int *arr,int n){
    int max_sum=INT_MIN;
    for(int i=0;i<n;i++){
        int curr_sum=0;
        for(int j=i;j<n;j++){
            curr_sum+=arr[j];
            max_sum=max(max_sum,curr_sum);
           
        }
        
    }
    cout<<"max sub array is:"<<max_sum<<endl;
}
int main(){
    int arr[6]={2,-3,6,-5,4,2};
    // int n=sizeof(arr)/sizeof(int);
    int n=6;
    Maxsum(arr,n);
    return 0;
}
