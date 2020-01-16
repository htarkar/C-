#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the starting number > ";
    cin >> n;
    // for( exp1; exp2; exp3)
    for( ;n > 0;--n) {
        cout << n << " ";
    }
    cout << "FIRE! \n";
    return 0;
}