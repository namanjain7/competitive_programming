#include<iostream>
using namespace std;

void charPrinter(char str[]){
	int offset = 0;
	while(*(str + offset) != '\0'){
		cout << *(str + offset) << endl;
	}
}

int main(){
	char str[] = "Hello";
	cout << str << endl;

	int size = sizeof(str);
	cout << size << endl;
	for(int i = 0; i < size-1; i++) cout << str[i] << endl;
	if(str[size-1] == '\0') cout << "This is the end of the array" << endl;

	int offset = 0;
	char str2[] = "World";
	while(*(str + offset) != '\0'){
		*(str + offset) = *(str2 + offset);
		offset++;
	}

	//for(int i = 0; i < size-1; i++) cout << str[i] << endl;
	charPrinter(str);


}