//bubble sort algorithm implementation in C++
#include <iostream>
using namespace std;

// Function to swap two elements
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

void bubbleSortAdaptive(int arr[], int n){
    int isSorted = 0;
    for(int i=0; i < n-1; i++)
    {
        isSorted = 1;
        for(int j=0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSorted = 0;
            }
        }
        if(isSorted)
            return;
    }
}

int main() {
    int arr[5] = {4, 8, 5, 6, 3};
    int size = 5;

    bubbleSort(arr, size);

    // Print the sorted array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}