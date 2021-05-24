#include<iostream>
#include<bitset>

#define M 100
#define print(name) print_(#name, (name))
using namespace std;

void print_(string s, bitset<M> b){
    cout << s << " " << b << endl;
}
void count_bits(bitset<8> p){
    int count = 0;
    for(int i = 0; i < p.size(); i++) count++;
    cout << count << endl;
}


int main(){
    bitset<M> p(1000000000);
    print(p);
}