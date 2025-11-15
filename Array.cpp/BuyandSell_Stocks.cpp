//** time complexity   O(n+n)=O(2n)=O(n) */
#include<iostream>
#include<climits>
using namespace std;
void max_profit(int *arr,int n){
    int bestBuy[100000];
    bestBuy[0]=INT_MAX;
    for(int i=1;i<n;i++){
        bestBuy[i]=min(bestBuy[i-1],arr[i]);
    }
    int max_profit=0;
    for(int i=0;i<n;i++){
        int curr_profit=arr[i]-bestBuy[i];
        max_profit=max(max_profit,curr_profit);
    }
    cout<<"max profit is:"<<max_profit<<endl;
}
int main(){
    int arr[6]={7,1,5,3,6,4};
    int n=sizeof(arr)/sizeof(int);
    max_profit(arr,n);
    return 0;
}