// Basically goto statement is used for altering the normal sequence of program execution.

#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int sum = 0;
    for(int i=0;i<6;i++){
        sum+=arr[i];
        if(arr[i]==5) goto ans;
    }

    cout<<sum;
    ans:
    cout<<"vo agaya vo agaya";

    return 0;

}