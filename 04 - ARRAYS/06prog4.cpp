//left rotate the array by one place 
#include <iostream>
using namespace std; 

void leftRotateByOne(int arr[], int n){
    int temp = arr[0];
    for(int i = 1; i < n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    cout<<"Before left rotation: ";
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    int n = sizeof(arr) / sizeof(arr[0]);
    leftRotateByOne(arr, n);

    cout << "\nAfter left rotation: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}