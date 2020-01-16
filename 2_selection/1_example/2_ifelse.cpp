#include <iostream>
using namespace std;

int main(){
    int mark;
    cout << "Enter Mark: ";
    cin >> mark;
    if (mark > 40) {
        cout << "Pass";
    } else {
        cout << "Fail";
    }
    cout << endl;
    return 0;
}