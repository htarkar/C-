#include <iostream>
using namespace std;

int main(){
    int year;
    cout << "Enter the year : ";
    cin >> year;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        cout << "It is a Leap Year";
    } else {
        cout << "It is not a Leap Year";
    }
    cout << "\n";
    return 0;
}


// Enter the year :
// year % 4 == 0 && year % 100 != 0 || year % 400 == 0
// It is a Leap year
// It is not Leap year