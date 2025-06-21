//write a c++ program to find the occurances of Q elements in an array using hashing
#include <iostream>
using namespace std;
 
void readArray(int arr[], int n) {
    cout << "Enter " << n << " elements for the array (values between 0 and 12):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
}

void precomputeHash(int arr[], int n, int hash[], int hashSize) {
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }
}

void processQueries(int hash[], int hashSize) {
    int q;
    cout << "Enter the number of queries: ";
    cin >> q;
    cout << "Enter the numbers to query (values between 0 and 12):" << endl;
    while (q--) {
        int number;
        cin >> number;
        cout << "Count of " << number << ": " << hash[number] << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    readArray(arr, n);

    int hash[13] = {0}; // Assuming numbers are between 0 and 12
    precomputeHash(arr, n, hash, 13);

    processQueries(hash, 13);

    cout << "Thank you for using the hashing occurrence finder!" << endl;
    return 0;
}