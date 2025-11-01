#include<iostream>
using namespace std;
void print(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // cout<<endl;
}
int bubbleSort(int *arr,int n){
    for(int i=0;i<n-1;i++){
   bool swapped=false;
        for(int j=0;j<n-1;j++){
          
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            swapped=true;
            }
        }
        if(!swapped){
            break;
        }
    }
    // print(arr,n);
}
int main(){
    int arr[5]={5,4,1,3,2};
    int n=sizeof(arr)/sizeof(int);
    bubbleSort(arr,n);
    print(arr,n);
    cout<<endl;
    return 0;
}