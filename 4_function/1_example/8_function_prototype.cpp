#include <iostream>
using namespace std;

int sum;
void addition(int x, int y) {
    sum = x + y; 
    cout << "X : " << x << endl;
    cout << "Y : " << y << endl;
    cout << "Addition : " << sum << endl;
}
void multiplication(int x, int y) {
    sum = x * y; 
    cout << "X : " << x << endl;
    cout << "Y : " << y << endl;
    cout << "Multiplication : " << sum << endl;
}
void division(int x, int y) {
    sum = x / y; 
    cout << "X : " << x << endl;
    cout << "Y : " << y << endl;
    cout << "Division : " << sum << endl;
}

int main(){
    int ch, x, y;
    for(;;) {
        cout << "\n 1. Addition";
        cout << "\n 2. Multiplication";
        cout << "\n 3. Division";
        cout << "\n 4. Exit! \n";
        cin >> ch;
        cout << "Enter value for x ";
        cin >> x;
        cout << "Enter value for y ";
        cin >> y;
        switch(ch) {
            case 1: addition(x,y); break;
            case 2: multiplication(x,y); break;
            case 3: division(x,y); break;
            case 4: break;
        }
        if (ch == 4)
            break;
    }
    return 0;
}