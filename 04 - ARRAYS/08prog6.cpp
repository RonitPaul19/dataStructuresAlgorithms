//move all the zeroes to the end of the array
#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void moveZeroes(int arr[], int n){
    int j;
    for (int i = 0; i < n; i++){
        if(arr[i] == 0){
            j=i;
            break;
        }
    }
    for (int i = j + 1; i < n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
    
}

int main() {
    int arr[] = {0, 1, 0, 3, 12, 0, 5, 0, 0, 0, 4, 0, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    moveZeroes(arr, n);
    
    cout << "Array after moving zeroes to the end: "; 
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}