#include <iostream>
using namespace std;

int main(){
    int subject[10];
    int mark, total = 0;
    for(int n = 0; n < 10; n++) {
        cout << "Enter mark for subject " << n+1 << " : ";
        cin >> mark;
        total += mark;
        subject[n] = mark;
    }
    for(int n = 0; n < 10; n++) {
        cout << "subject " << n+1 << " : " << subject[n] << endl;
    }
    cout << "Average Mark: " << (total / 10) << endl;
    return 0;
}