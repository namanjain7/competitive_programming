#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

void print(double x){
	cout << "The number is: " << x << " floor: " << floor(x) << " Ceil: " << ceil(x) << " Trunc: " << trunc(x) << " Round is: " << round(x) << endl;
}

void setPrecision(double x){
	for(int i = 0; i < 10; i++)
		cout << "The precision upto " << i << " is: " << fixed << setprecision(i) << x << endl;
}

int main(){
	double x = 1.32434;
	double y = -1.334543;

	double z = 1.4;
	double a = -1.5;
	print(M_PI);
	setPrecision(M_PI);
}