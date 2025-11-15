#include<iostream>
using namespace std;
void printSubarray(int arr[],int n){
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
           for(int i=start;i<=end;i++){
            cout<<arr[i];
           }
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n;
    void(printSubarray(arr,5));
    return 0;
}
//*** time complexity=O(n cube) */
