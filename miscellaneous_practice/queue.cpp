#include<iostream>
#include<queue>

using namespace std;

void print_queue(queue<int> &q){
    while(!q.empty()){
        cout << q.front() << " - ";
        q.pop();
    }
}

int main(){
    queue<int> q;
    
    for(int i = 1; i < 6; ++i){
        q.push(i);
    }

    print_queue(q);

    return 0;
}