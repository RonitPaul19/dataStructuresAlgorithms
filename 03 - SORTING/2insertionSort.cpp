//write a c++ program to sort an array using insertion sort algorithm
#include <iostream>
using namespace std;

// Function to perform insertion sort
void insertionSort(int arr[], int n){
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main() {
    int arr[5] = {4, 8, 5, 6, 3};
    int size = 5;

    insertionSort(arr, size);

    // Print the sorted array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}