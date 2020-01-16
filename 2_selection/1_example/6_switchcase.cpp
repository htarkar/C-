#include <iostream>
using namespace std;

int main(){
    int day;
    cout << "Enter Day: ";
    cin >> day;
    switch(day) {
        case 1: cout << "Sunday"; 
        case 2: cout << "Monday"; 
        case 3: cout << "Tuesday"; 
        case 4: cout << "Wednesday"; 
        case 5: cout << "Thursday";
        case 6: cout << "Friday";
        case 7: cout << "Saturday";
        default: cout << "Invaliad Day";
    }
    cout << endl;
    return 0;
}