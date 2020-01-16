#include <iostream>
using namespace std;

int main(){
    char c = 'z', *cp;
    float f = 5.2, *fp;
    int i = 100, *ip;
    cp = &c;
    fp = &f;
    ip = &i;
    cout << "Char " << *cp << "\nFloat " << *fp << "\nInt " << *ip;
    cp++; // cp = cp + 1;
    fp++;
    ip++;
    cout << "\nChar " << *cp << "\nFloat " << *fp << "\nInt " << *ip;
    cp += 10;
    fp += 10;
    ip += 10;
    cout << "\nChar " << *cp << "\nFloat " << *fp << "\nInt " << *ip;
    return 0;
}