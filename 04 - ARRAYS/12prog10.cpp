//find a number that appears once, and other numbers twice
#include <iostream>
using namespace std;

int findOneTimeAppeared(int a[], int n){
    int x = 0;
    for(int i = 0; i < n; i++) {
        x ^= a[i];
    }
    return x;
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int n=11;

    int ans = findOneTimeAppeared(arr, n);
    cout<<ans;

    return 0;
}
