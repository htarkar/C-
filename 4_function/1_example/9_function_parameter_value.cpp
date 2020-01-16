#include <iostream>
using namespace std;

void swap_val(int a, int b) {
    int temp;
    cout << "\n before swap A: " << a << " B: " << b;
    temp = a;
    a = b;
    b = temp;
    cout << "\n after swap A: " << a << " B: " << b;
}

int main() {
    int x,y;
    cout << "Enter value of x and y ";
    cin >> x >> y;
    cout << "\n x : " << x;
    cout << "\n y : " << y;
    swap_val(x,y);
    cout << "\n after function call ";
    cout << "\n x : " << x;
    cout << "\n y : " << y;
    cout << endl;
    return 0;
}