#include<iostream>
using namespace std;

void swap(int *a,int *b){ 
        int temp;
        temp = *a;
        *a = *b;
        *b = temp;
}


int main(){

    int x = 10;
    // cout<<"Address of x in memory:"<< &x; // we use & with variable name to get the address of variable.

    // Pointer are used to store address rather then value.
    int *pointr;
    // pointr = &x;
    // cout<<pointr<<endl;  // here we print the address at which value is stored.
    // cout<<*pointr; // here we access the value that is pointed by pointr.

    // Now let's operate on array with pointer
    int arr[5];
    pointr = &arr[0];
    for(int i=0;i<5;i++){
        *(pointr+i) = i;
    }
    for(int i=0;i<5;i++){
        // cout<<(pointr+i)<<endl;
    }
    int a = 2;
    int b = 5;

    // swap(a,b);
    swap(&a,&b);
    cout<<"a:"<<a<<" and"<<" b:"<<b;

    return 0;
}
