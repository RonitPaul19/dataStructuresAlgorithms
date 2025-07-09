//Sort an array of 0's , 1's and 2's
//ALGORITHM NAME - Dutch National Flag Algorithm

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sortArrayin012(vector<int>& arr, int n) {
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++; mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else if (arr[mid] == 2) {
            swap(arr[mid], arr[high]);
            high--;
        }
        //special case when array contains other elements except 0 1 and 2
        else {
            return 0;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    if (n <= 0) {
        cout << "Invalid array size." << endl;
        return 1;
    }

    vector<int> arr(n);
    cout << "Enter " << n << " elements (only 0, 1, or 2): ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int X = sortArrayin012(arr, n);

    if(X){
        cout << "Sorted array: ";
        for (int num : arr) {
            cout << num << " ";
        }
    }
    else{
        cout<<"ERROR : Array contains elements other than 0, 1 and 2";
    }
    cout << endl;
}
