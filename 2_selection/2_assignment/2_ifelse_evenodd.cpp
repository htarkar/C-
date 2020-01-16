#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter any number = ";
    cin >> num;
    if (num % 2 == 0) {
        cout << "The given number is Even";
    } else {
        cout << "The given number is Odd";
    }
    cout << endl;
    return 0;
}

// num % 2 == 0