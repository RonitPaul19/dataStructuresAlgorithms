//find missing element in an array
#include <iostream>
using namespace std;

//using XOR operator
int findMissing(int arr[], int n) {
    int x1 = 0;
    int x2 = 0;

    for (int i = 0; i < n; i++) {
        x1 ^= arr[i];
        x2 ^= (i + 1);
    }
    x2 ^= (n + 1); // XOR the last number

    return (x1 ^ x2);
}

int main() {
    int arr[] = {1, 2, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int missing = findMissing(arr, n);
    cout << "Missing element is: " << missing << endl;
    return 0;
}
