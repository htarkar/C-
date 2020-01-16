#include <iostream>
using namespace std;

int main() {
    int temp, a, b;
    cout << "Enter value of a : ";
    cin >> a;
    cout << "Enter value of b : ";
    cin >> b;

    temp = a;
    a = b;
    b = temp;

    cout << " a : " << a << "\n b : " << b << endl;
    return 0;
}

// Enter value of a : 2
// Enter value of b : 3

//  a : 3
//  b : 2