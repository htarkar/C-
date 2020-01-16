#include <iostream>
using namespace std;

int main(){
    int myInt;
    int *myptr;
    myInt = 55;
    cout << myInt << endl;
    myptr = &myInt;
    *myptr = 11;
    cout << "myptr = " << *myptr << endl;
    cout << "myInt = " << myInt << endl;
    return 0;
}

// 55
// myptr = 11
// myInt = 11