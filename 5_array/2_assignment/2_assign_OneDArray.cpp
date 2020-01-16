#include <iostream>
using namespace std;

int main(){
    int number[9];
    for(int i = 0; i < 9; i++) {
        cout << "Enter any number ";
        cin >> number[i];
    }
    for(int i = 0; i < 9; i++) {
        cout << number[i] << "\t";
    }
    return 0;
}

// Enter any number