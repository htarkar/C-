#include <iostream>
using namespace std;

// constant expression, condation
int main(){
    int day;
    cout << "Enter Day: ";
    cin >> day;
    if (day == 1) {
        cout << "Sunday";
    } else if (day == 2) {
        cout << "Monday";
    } else if (day == 3) {
        cout << "Tuesday";
    } else if (day == 4) {
        cout << "Wednesday";
    } else if (day == 5) {
        cout << "Thursday";
    } else if (day == 6) {
        cout << "Firday";
    } else if (day == 7) {
        cout << "Saturday";
    } else {
        cout << "Invalid Day";
    }
    cout << endl;
    return 0;
}