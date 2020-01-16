#include <iostream>
using namespace std;

// condation
int main(){
    int mark;
    cout << "Enter Mark: ";
    cin >> mark;
    if (mark <= 100 && mark >= 90) {
        cout << "Grade A";
    } else if (mark < 90 && mark >= 80) {
        cout << "Grade B";
    } else if (mark < 80 && mark >= 70) {
        cout << "Grade C";
    } else if (mark < 70 && mark >= 60) {
        cout << "Grade D";
    } else if (mark < 60 && mark >= 50) {
        cout << "Grade E";
    } else if (mark < 50 && mark >= 40) {
        cout << "Grade F";
    } else {
        cout << "Invalid Mark";
    }
    cout << endl;
    return 0;
}