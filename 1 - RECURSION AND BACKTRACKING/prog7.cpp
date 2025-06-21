//print all subsequences in an array using recursion
#include <iostream>
#include <vector>
using namespace std;

void printF(int ind, vector<int>&ds, int arr[], int n){
    if(ind == n){
        for(auto it: ds)
            cout << it << " ";
        if(ds.size() == 0)
            cout << "{}"; // Print empty set if no elements are included
        cout << endl;
        return;
    }

    // Include the current element
    ds.push_back(arr[ind]);
    printF(ind + 1, ds, arr, n);

    // Exclude the current element
    ds.pop_back();
    printF(ind + 1, ds, arr, n);
}

int main() {
    int arr[] = {3, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> ds; // To store the current subsequence
    printF(0, ds, arr, n);
    return 0;
}