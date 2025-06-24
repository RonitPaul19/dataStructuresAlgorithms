#include <iostream>
using namespace std;

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool indInsertion(int arr[], int& size, int element, int capacity, int index) {
    if (size >= capacity || index < 0 || index > size) {
        return false; // Failure
    }
    for (int i = size - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    size++;
    return true; // Success
}

bool indDeletion(int arr[], int& size, int index) {
    if (size <= 0 || index < 0 || index >= size) {
        return false; // Failure
    }
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    return true; // Success
}

int main() {
    const int capacity = 100;
    int arr[capacity], size, element, index, choice;

    cout << "Enter the number of elements (max " << capacity << "): ";
    cin >> size;
    if (size < 0 || size > capacity) {
        cout << "Invalid size." << endl;
        return 1;
    }

    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    while (true) {
        cout << "\nCurrent array: ";
        display(arr, size);

        cout << "\nChoose operation:\n";
        cout << "1. Insert element\n";
        cout << "2. Delete element\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter the element to insert: ";
            cin >> element;
            cout << "Enter the index to insert at (0 to " << size << "): ";
            cin >> index;
            if (indInsertion(arr, size, element, capacity, index)) {
                cout << "Insertion successful.\n";
            } else {
                cout << "Insertion failed. Invalid index or array is full.\n";
            }
        } else if (choice == 2) {
            cout << "Enter the index to delete (0 to " << size - 1 << "): ";
            cin >> index;
            if (indDeletion(arr, size, index)) {
                cout << "Deletion successful.\n";
            } else {
                cout << "Deletion failed. Invalid index or array is empty.\n";
            }
        } else if (choice == 3) {
            cout << "Exiting program.\n";
            break;
        } else {
            cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
