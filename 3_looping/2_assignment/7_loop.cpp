#include <iostream>
using namespace std;

int main(){
    int no = 0, sum = 0;
    cout << "Pls type 111 to exit from program" << endl;
    do {
        sum += no;
        cout << "Enter number ";
        cin >> no;
    } while (no != 111);
    cout << "Sum = " << sum << endl;
    return 0;
}

// Pls type 111 to exit from program

// Enter number

// Sum =