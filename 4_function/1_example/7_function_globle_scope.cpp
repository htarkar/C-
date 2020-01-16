#include <iostream>
using namespace std;

int x = 2; // global variable

void func1(){
	cout << x << endl;
}

void func2(){
	cout << x << endl;
}

int main(){
	func1();
	x = 3;
	func2();
	return 0;
}

