#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(){
    stack<string> st, sr;
    st.push("Hello!");
    st.push("Naman");
    st.push("Jain");
    
    st.emplace("How are you!!");

    sr.emplace("1");
    sr.emplace("2");
    sr.swap(st);
    swap(sr, st);

    cout << "The size of the stack is: " << st.size() << "\n";

    while(!st.empty()){
        cout << st.top() << "\n";
        st.pop();
    }
}