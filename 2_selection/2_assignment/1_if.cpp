#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter negative number = ";
    cin >> a;
    if (a < 0) {
        a = -a;
    } else {
        cout << "Is Not Nagative Number !";
    }
    cout << "a = " << a << endl;
    return 0;
}

// Enter negative number = 
// if < 0
// a = -a
// "Is Not Nagative Number !"