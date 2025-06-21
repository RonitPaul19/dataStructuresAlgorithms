//find the second largest element in an array
#include <iostream>
#include <climits>  // for INT_MIN
using namespace std;

int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        cout << "Array must have at least two elements." << endl;
        return -1;
    }

    int first = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        cout << "There is no second largest element (all elements may be same)." << endl;
        return -1;
    }

    return second;
}

int main() {
    int arr[] = {10, 20, 5, 8, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = findSecondLargest(arr, n);
    if (secondLargest != -1) {
        cout << "Second largest element: " << secondLargest << endl;
    }

    return 0;
}
