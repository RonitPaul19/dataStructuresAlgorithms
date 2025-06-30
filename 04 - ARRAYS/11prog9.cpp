//maximum consecutive ones 
#include <iostream>
using namespace std;

int findMaxConsecutiveOnes(int arr[], int n){
    int maxCount = 0;
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 1){
            count++;
            maxCount = max(maxCount, count);
        } else {
            count = 0;
        }
    }
    return maxCount;
}

int main() {
    // Your code here

    int arr[] = {1, 1, 0, 1, 1, 1, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = findMaxConsecutiveOnes(arr, n);
    cout << "Maximum consecutive ones: " << result << endl;
    // Output: Maximum consecutive ones: 3

    // Additional test case 1
    int arr2[] = {0, 0, 0, 0, 0};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int result2 = findMaxConsecutiveOnes(arr2, n2);
    cout << "Maximum consecutive ones in second array: " << result2 << endl;
    // Output: Maximum consecutive ones in second array: 0

    // Additional test case 2
    int arr3[] = {1, 1, 1, 1, 1};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int result3 = findMaxConsecutiveOnes(arr3, n3);
    cout << "Maximum consecutive ones in third array: " << result3 << endl;
    // Output: Maximum consecutive ones in third array: 5

    // Additional test case 3
    int arr4[] = {1, 0, 1, 0, 1};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    int result4 = findMaxConsecutiveOnes(arr4, n4);
    cout << "Maximum consecutive ones in fourth array: " << result4 << endl;
    // Output: Maximum consecutive ones in fourth array: 1

    return 0;
}