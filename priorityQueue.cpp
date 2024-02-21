// A priority queue is queue where the element are arranged in some specific order, mainly in cpp top most element is greatest.
// Some operation are like queue.top()-->return instance of top element, queue.push()-->add element on back side of queue,queue.pop()-->delete the top most element of queue.

#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> pq;
    int arr[] = {2,6,1,5};
    cout<<"Array:";
    for(auto i:arr){
        cout<<i<<' ';
    }
    cout<<endl;

    for(int i=0; i< 4; i++){
        pq.push(arr[i]);
    }
    cout<<"Priority Queue:";
    while(!pq.empty()){
        cout<<pq.top()<<' ';
        pq.pop();
    }

    return 0;
}