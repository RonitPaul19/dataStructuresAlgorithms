//print from N to 1 using recursion
#include<iostream>
using namespace std;

void f(int i, int N){
    if(i<1)
        return;
    cout<<i<<" ";
    f(i-1, N);
}

int main(){
    int n;
    cout<<"Enter a limit";
    cin>>n;
    f(n, n);

    return 0;
}