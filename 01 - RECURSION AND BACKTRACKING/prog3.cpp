//Print 1 to N using backtracking
#include<iostream>
using namespace std;

void f(int i, int N){
    if(i<1)
        return;
    f(i-1, N);
    cout<<i<<" ";
}

int main(){
    int n;
    cout<<"Enter limit";
    cin>>n;
    f(n, n);
    return 0;
}