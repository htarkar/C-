#include <iostream>
using namespace std;

int main(){
    // number[0] = 1;
    // number[1] = 2;
    // number[2] = 3;

    int number[9] = {1,2,3,4,5,6,7,8,9};
    
    for(int i = 0; i < 9; i++) {
        cout << number[i] << "\t";
    }
    return 0;
}