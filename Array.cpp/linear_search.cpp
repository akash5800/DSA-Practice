#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            //  cout << "Key found at: " << i << endl;
            return i;
        }
    }
    cout<<"key not found"<<endl;
    return -1; // Key not found
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Sample array
    int key = 5; // Value to search
    int n = sizeof(arr) / sizeof(int); // Number of elements
    int result = linearSearch(arr, n, key); // Call the function
    cout << "Returned index: " << result << endl;
    return 0;
}