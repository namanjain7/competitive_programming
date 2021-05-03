#include<iostream>
#include<bitset>

#define M 8
#define print(name) print_(#name, (name))
using namespace std;

void print_(string s, bitset<M> b){
    cout << s << " " << b << endl;
}

void print_(string s, bitset<4> b){
    cout << s << " " << b << endl;
}

void count_bits(bitset<8> p){
    int count = 0;
    for(int i = 0; i < p.size(); i++) count++;
    cout << count << endl;
}

int32_t main(){
    
    bitset<8> p;
    p = 70;

    bitset<M> bset2(20);
    bitset<M> bset3(string("1100"));

    cout << "p " << p << endl;
    cout << "bset2 " << bset2 << endl;
    cout << "bset3 " << bset3 << endl;
    
    bitset<M> set8;
    print(set8);
    set8[1] = 1;    //sets the second bit to 1
    //set8[0] = 1;    //sets the first bit to 0
    set8[M-1] = 1;  //sets the last bit to 1
    //set8[M] = 1;    //This do nothing, but also doesn't through any error
    //set8[M+2] = 1;  //This also do nothing, and also doesn't through any error
    print(set8);

    int numberof1 = set8.count();
    cout << "Number of ones are: " << numberof1 << endl;

    int numberof0 = set8.size() - numberof1;
    cout << "Number of zeroes are: " << numberof0 << endl;

    cout << set8.test(1) << endl;
    cout << set8[1] << endl;

    if(set8.any()) cout << "Any method of set8" << endl;    //returns true of any one bit is set
    if(!set8.none()) cout <<"none method of set8" << endl;  //return true if none of the bit is set.

    cout << set8.set() << endl;
    set8.set(3, 0);
    //set8.set(3, 1);
    print(set8);

    set8.reset();
    print(set8);

    set8.flip();
    print(set8);
    set8.flip(2);
    print(set8);

    int x = 14;
    cout << "Decimal No: " << x << " Binary Equivalent: " << bitset<8>(x) << endl;

    bitset<4> bset4(9), bset5(3);
    print(bset4);
    print(bset5);
    cout << (bset4 == bset5) << endl;
    cout << (bset4 != bset5) << endl;

    cout << (bset4 ^= bset5) << endl;   //operation and assignment
    cout << (bset4 &= bset5) << endl;
    cout << (bset4 |= bset5) << endl;

    print(bset4);
    print(bset5);

    cout << (bset4 <<= 2) << endl;
    cout << (bset4 >>= 1) << endl;

    cout << (~bset4) << endl;

    print(bset4);
    print(bset5);
    cout << (bset4 & bset5) << endl;    //only operation, no assignment
    cout << (bset4 | bset5) << endl;
    cout << (bset4 ^ bset5) << endl;

    print(bset5);
    //iterating through bitsets
    for(int i = 0; i < bset5.size(); i++) cout << bset5.test(i) << " ";
    cout << endl;
    return 0;
}