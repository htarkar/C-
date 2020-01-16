#include <iostream>
using namespace std;

int main(){
    int subject[5], mark, total;
    for(int n = 0; n < 6; n++) {
        cout << "Enter mark for subject " << n+1 << " : ";
        cin >> mark;
        total += mark;
        subject[n] = mark;
    }
    for(int n = 0; n < 6; n++) {
        cout << "subject " << n + 1 << " : " << subject[n] << endl;
    }
    cout << "Average Mark: " << total / 6 << endl;
    return 0;
}