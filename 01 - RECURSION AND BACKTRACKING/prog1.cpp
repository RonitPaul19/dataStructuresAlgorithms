//Print linearly from 1 to N using recursion
#include<iostream>
using namespace std;

int f(int i, int N){
    if(i>N)
        return 0;
    cout<<i<<" ";
    f(i+1, N);
}

int main(){
    int n;

    cout<<"Enter a number";
    cin>>n;

    f(1, n);

    return 0;
}
