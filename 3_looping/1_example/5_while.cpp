#include <iostream>
using namespace std;

//initialization unknown (repitation)
int main(){
    int n;
    while(n != 0) {
        cout << "Enter number (0 to end): "; // 0
        cin >> n;
        cout << "You entered: " << n << "\n";
    }
    return 0;
}