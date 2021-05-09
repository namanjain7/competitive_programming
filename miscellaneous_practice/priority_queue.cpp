#include<iostream>
#include<vector>
#include<queue>

using namespace std;

void print_max_heap(priority_queue<int>& pq){
    cout << "Printing max heap!!\t";
    while(!pq.empty()){
        cout << pq.top() << "-";
        pq.pop();
    }
    cout << endl;
}

void print_min_heap(priority_queue<int, vector<int>, greater<int>>& pq){
    cout << "Printing min head!!\t";
    while(!pq.empty()){
        cout << pq.top() << "-";
        pq.pop();
    }
    cout << endl;
}

int main(){
    //Declaring Max heap
    priority_queue<int> pq;

    int a[10] = {3, 12, 8, 3, 2, 1, 0, 18};
    for(int i = 0; i < 10; i++) pq.push(a[i]);
    print_max_heap(pq);

    //Declaring Min Heap
    priority_queue<int, vector<int>, greater<int>> pq1;
    
    for(int i = 0; i < 10; i++) pq1.push(a[i]);
    print_min_heap(pq1);

    return 0;
}