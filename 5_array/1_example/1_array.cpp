#include <iostream>
using namespace std;

int main(){
    int subject1 = 0;
    int subject2 = 0;
    int subject3 = 0;
    int subject4 = 0;
    int subject5 = 0;
    int subject6 = 0;
    int mark, total;

    for(int n = 1; n < 7; n++) {
        cout << "Enter mark for subject " << n << " : ";
        cin >> mark;
        total += mark;
        switch(n) {
            case 1: subject1 = mark; break;
            case 2: subject2 = mark; break;
            case 3: subject3 = mark; break;
            case 4: subject4 = mark; break;
            case 5: subject5 = mark; break;
            case 6: subject6 = mark; break;
        }
    }

    cout << "subject 1 : " << subject1 << endl;
    cout << "subject 2 : " << subject2 << endl;
    cout << "subject 3 : " << subject3 << endl;
    cout << "subject 4 : " << subject4 << endl;
    cout << "subject 5 : " << subject5 << endl;
    cout << "subject 6 : " << subject6 << endl;
    cout << "Average Mark : " << (total / 6) << endl;

    return 0;
}