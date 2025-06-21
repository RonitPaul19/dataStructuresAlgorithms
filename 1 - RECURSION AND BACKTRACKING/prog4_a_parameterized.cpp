//summation of first N natural numbers using recursion (parameterized)
#include<iostream>
using namespace std;

void f(int i, int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    f(i-1, sum+i);
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    f(n, 0);
    return 0;
}