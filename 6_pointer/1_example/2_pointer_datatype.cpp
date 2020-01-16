#include <iostream>
using namespace std;

int main(){
    char c = 'z', *cp;
    float f = 3.14, *fp;
    int i = 540, *ip;
    cp = &c;
    fp = &f;
    ip = &i;
    cout << "value of c=" << c << "\n *cp=" << *cp << "\n &cp=" << cp << endl;
    cout << "value of f=" << f << "\n *fp=" << *fp << "\n &fp=" << fp << endl;
    cout << "value of i=" << i << "\n *ip=" << *ip << "\n &ip=" << ip << endl;
    return 0;
}