//functional (better approach than parameterized)
#include<iostream>
using namespace std;

int f(int n){
    if(n == 0)
        return 0;
    return(n + f(n-1));
}

int main(){
    int n;
    cout<<"Enter limit : ";
    cin>>n;
    cout<<f(n);
    return 0;
}