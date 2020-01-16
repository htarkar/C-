#include <iostream>
using namespace std;

int main(){
    int number[3][3], i, j;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            cout << "Enter any number ";
            cin >> number[i][j];
        }
    }
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            cout << number[i][j] << "\t";
        }
    }
    return 0;
}