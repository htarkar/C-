#include <iostream>
using namespace std;

void func1(){
	int x = 2; //local variable
	cout << x << endl;
}

void func2(){
	int x = 3;
	cout << x << endl;
}

int main(){
	// x = 3;
	func1();
	func2();
	return 0;
}