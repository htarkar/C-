#include <iostream>
using namespace std;

int main(){
    int mark;
    cout << "Enter Mark: ";
    cin >> mark;
    if (mark <= 100 && mark >= 90) {
        cout << "Grade A";
    } 
    if (mark < 90 && mark >= 80) {
        cout << "Grade B";
    } 
    if (mark < 80 && mark >= 70) {
        cout << "Grade C";
    } 
    if (mark < 70 && mark >= 60) {
        cout << "Grade D";
    }
    if (mark < 60 && mark >= 50) {
        cout << "Grade E";
    }
    if (mark < 50 && mark >= 40) {
        cout << "Grade F";
    } 
    if (mark > 100 || mark < 40){
        cout << "Invalid Mark";
    }
    cout << endl;
    return 0;
}

// mark 100 90 grade A
// mark 90 80 grade B
// ...
// mark 50 40
// "Invalid Mark"