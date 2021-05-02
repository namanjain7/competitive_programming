#include<iostream>
#include<queue>

using namespace std;

class car{
    public:
    int x;
    int y;
    int id;

    car(int id, int x, int y){
        this -> id = id;
        this -> x = x;
        this -> y = y;
    }
    int dist(){
        return x * x + y * y;
    }
};

bool comp(car a, car b){
    return a.x^2 + a.y^2 < b.x^2 + b.y^2;
}

class carCompare{
    public:
    bool operator()(car a, car b){
        return a.dist() > b.dist();
    }
};

int main(){

    int x[] = {4, 2, 6, 7, 1, 89, 12, 4};
    int y[] = {5, 2, 4, 1, 0, 20, 1, 45};

    priority_queue<car, vector<car>, comp> pq;

    for(int i = 0; i < 8; i++) pq.push(car(i, x[i], y[i]));

    while(!pq.empty()){
        cout << "Id is: " << pq.top().id << "\t(" << pq.top().x << ", " << pq.top().y << ")" << endl;
        pq.pop();
    }

    return 0;
}