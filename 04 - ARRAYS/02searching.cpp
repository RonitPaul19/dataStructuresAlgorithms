//2 types of searching in arrays: linear search and binary search
#include <iostream>
using namespace std;

// Linear Search
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if not found
}

// Binary Search (requires sorted array)
int binarySearch(int arr[], int size, int key) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Avoid overflow

        if (arr[mid] == key) {
            return mid; // Return the index if found
        }
        else if (arr[mid] < key) {
            left = mid + 1; // Search in the right half
        }
        else {
            right = mid - 1; // Search in the left half
        }
    }
    return -1; // Return -1 if not found
}   
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    // Display the array
    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << "Enter the element to search: ";
    cin >> key;

    // Linear Search
    int linearIndex = linearSearch(arr, size, key);
    if (linearIndex != -1) {
        cout << "Element found at index (Linear Search): " << linearIndex << endl;
    } else {
        cout << "Element not found (Linear Search)." << endl;
    }

    // Binary Search
    int binaryIndex = binarySearch(arr, size, key);
    if (binaryIndex != -1) {
        cout << "Element found at index (Binary Search): " << binaryIndex << endl;
    } else {
        cout << "Element not found (Binary Search)." << endl;
    }

    return 0;
}