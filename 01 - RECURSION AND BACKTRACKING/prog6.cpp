//recursive function to find the nth element in the fibonacci series
#include<iostream>
using namespace std;

int f(int n){
    if(n <= 1) return n;
    return f(n - 1) + f(n - 2);
}

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The " << n << "th element in the Fibonacci series is: " << f(n) << endl;
    return 0;
}