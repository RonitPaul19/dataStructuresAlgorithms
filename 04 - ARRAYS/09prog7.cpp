//union of two sorted arrays
#include <iostream>
#include <vector> 
using namespace std;

//time complexity : O(n1 + n2)
//space complexity : O(n1 + n2) -> (worst case) if all the elements are unique

vector<int>Union(vector<int>a, vector<int>b){
    int n1 = a.size();
    int n2 = b.size();
    vector<int>unionArr;
    int i = 0, j = 0;

    while(i<n1 && j<n2){
        if(a[i] < b[j]){
            if(unionArr.empty() || unionArr.back() != a[i])
                unionArr.push_back(a[i]);
            i++;
        } 
        else if(b[j] < a[i]){
            if(unionArr.empty() || unionArr.back() != b[j])
                unionArr.push_back(b[j]);
            j++;
        } 
        else{
            if(unionArr.empty() || unionArr.back() != a[i]) {
                unionArr.push_back(a[i]);
            }
            i++;
            j++;
        }
    }

    // Add remaining elements from a
    while(i < n1) {
        if(unionArr.empty() || unionArr.back() != a[i])
            unionArr.push_back(a[i]);
        i++;
    }
    // Add remaining elements from b
    while(j < n2) {
        if(unionArr.empty() || unionArr.back() != b[j])
            unionArr.push_back(b[j]);
        j++;
    }
    return unionArr;
}

int main() {
    // Your code here
    vector<int> a = {1, 2, 4, 5, 6};
    vector<int> b = {2, 3, 5, 7};
    vector<int> result = Union(a, b);
    cout << "Array 1: ";
    for(int i : a) {
        cout << i << " ";
    }
    cout << "\nArray 2: ";
    for(int i : b) {
        cout << i << " ";
    }
    cout << endl;
    cout << "Union of two sorted arrays: ";
    for(int i : result) {
        cout << i << " ";
    }
    return 0;
}