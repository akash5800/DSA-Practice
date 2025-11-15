#include<iostream>
using namespace std;

void insertionSort(int *arr, int n) {
    for(int i = 1; i < n; i++) {
        int j = i;
        // Swap backwards until the current element is in the correct position
        while(j > 0 && arr[j] > arr[j - 1]) {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
}

int main() {
    int arr[5] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(int);
    insertionSort(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}