#include<iostream>
using namespace std;
int binarySerch(int arr[],int n,int key){
      int st=0, end=n-1;
      while(st<=end){
        int mid=(st+end)/2;
        if(arr[mid]==key){
            return mid;
        } else if(arr[mid]>key){
            end=end-1;
        }else{
            st=mid+1;
        }
    }
        return -1;
        
    }
        int main(){
            int arr[]={1,2,3,4,5,6,9};
            int n=sizeof(arr)/sizeof(int);
            int key=2;
            cout<<"position is:"<<binarySerch(arr,n,key);
            return 0;
        
        }
