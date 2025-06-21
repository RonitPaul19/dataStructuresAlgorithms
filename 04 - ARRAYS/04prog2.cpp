//write a c++ program to check if the array is sorted or not
#include<iostream>
using namespace std;
bool isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] >=arr[i - 1]) { }
        else return false;
    }
}
int main() {
    int arr[] = {1, 2, 3, 5, 4, 22} ; // Example sorted array
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr, n)) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }

    return 0;
}