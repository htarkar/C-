#include <iostream>
using namespace std;

int main(){
    int i, j, number[3][3], big = 0;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            cout << "Enter Number : ";
            cin >> number[i][j];
        }
    }
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            cout << number[i][j] << " ";
        }
    }
    cout << endl;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(number[i][j] > big)
                big = number[i][j];
        }
    }
    cout << "Largest number is " << big;

    return 0;
}