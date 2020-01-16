#include <iostream>
using namespace std;

int main(){
    int a = 5, x, *ptvar;
    ptvar = &a; // assign the address of variable 'a'
    
    cout << ptvar << endl;

    x = *ptvar; // assign the value at the addres by 'ptvar'
    cout << x << endl;
    return 0;
}