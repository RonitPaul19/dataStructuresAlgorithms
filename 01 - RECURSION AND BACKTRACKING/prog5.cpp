//write a recursive function to reverse an array
#include<iostream>
using namespace std;

// Swap function
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void f(int arr[], int l, int r){
    if(l >= r) return;

    // Use the swap function
    swap(arr[l], arr[r]);

    f(arr, l + 1, r - 1);
}

int main(){
    int arr[5]={1, 2, 3, 4, 5};
    const int n = 5;

    f(arr, 0, 4);

    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }

    return 0;
}
