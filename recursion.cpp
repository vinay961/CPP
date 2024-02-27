
#include<iostream>
using namespace std;

// Calculate sum of n natural number using recursion
int sum(int n){
    if(n==0) return 0;

    int res = n+sum(n-1);
    return res;
}

// Fibonnaci series using recursion
int fab(int n){
    if(n==0) return 0;

    if(n==1 || n==2) return 1;
    else{
        return (fab(n-1)+fab(n-2));
    }
}

int main(){
    int n=5;
    cout<<sum(n);
    cout<<fab(5);

    return 0;
}

