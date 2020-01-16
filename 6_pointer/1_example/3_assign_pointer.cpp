#include <iostream>
using namespace std;

int main(){
    int num1 = 5, num2 = 15;
    int *ptr1 = &num1, *ptr2 = &num2;
    *ptr1 = 10;
    *ptr2 = *ptr1;
    cout << "Number 1: " << num1 << "\n Number 2: " << num2 << endl;
    ptr1 = ptr2;
    *ptr1 = 20;
    cout << "Number 1: " << num1 << "\n Number 2: " << num2 << endl;

    return 0;
}

// Number 1: 10
//  Number 2: 10
// Number 1: 10
//  Number 2: 20