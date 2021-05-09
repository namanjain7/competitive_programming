#include<bits/stdc++.h>
using namespace std;

void print(string s){
	std::cout << s << endl;
}

void permute(string s, int l, int r){
	if(l == r){
		print(s);
	}
	else{
		for(int i = l; i < r+1; i++){
			swap(s[i], s[l]);
			permute(s, l+1, r);
			//char c = s[l];
			//s[l] = s[i];
			//s[i] = c;
		}
	}
}

int main(){
	string s = "ABC";
	permute(s, 0, s.length()-1);
	return -1;
}
