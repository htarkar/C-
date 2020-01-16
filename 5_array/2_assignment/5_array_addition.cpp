#include <iostream>
using namespace std;

int main(){
    int a[5], b[5], c[5];
    for(int n = 0; n < 5; n++) {
        cout << "Enter number for a array : ";
        cin >> a[n];
    }
    for(int n = 0; n < 5; n++) {
        cout << "Enter number for b array : ";
        cin >> b[n];
    }
    for(int n = 0; n < 5; n++) {
        c[n] = a[n] + b[n];
    }
    for(int n = 0; n < 5; n++) {
        cout << a[n];
    }
    cout << endl;
    for(int n = 0; n < 5; n++) {
        cout << b[n];
    }
    cout << endl;
    for(int n = 0; n < 5; n++) {
        cout << c[n];
    }
    return 0;
}