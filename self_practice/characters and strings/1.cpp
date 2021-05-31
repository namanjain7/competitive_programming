#include<iostream>
using namespace std;

int main(){
	const char* str = "Hello";
	cout << str << endl;
	int offset = 0;
	int size = 0;
	while(*(str + offset) != '\0'){
		cout << *(str + offset) << endl;
		offset++;
		size++;
	}
	cout << size << endl;
	//cout << sizeof(str) << endl;	//returns size of pointer which is 4, so it's not much useful
	//int size = sizeof(str)/sizeof(str[0]);
	//cout << size << endl;
	return 0;
}