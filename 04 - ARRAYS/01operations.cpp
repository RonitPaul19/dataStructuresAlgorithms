#include <iostream>
using namespace std;

int insert(int arr[], int size, int element, int capacity, int index){
    if(size >= capacity) {
        return 0;
    }
    for(int i = size - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int size = 5;
    int capacity = 100;
    int element = 10;
    int index = 2;
    cout << "Array before insertion: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    if(insert(arr, size, element, capacity, index)) {
        size++;
        cout << "Array after insertion: ";
        for(int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
    } else {
        cout << "Insertion failed. Array is full." << endl;
    }
    return 0;           
}