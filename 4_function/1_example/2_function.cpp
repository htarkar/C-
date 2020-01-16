#include <iostream>
using namespace std;

// declaration
void starline();

// calling
int main(){
    cout << " Data Type Range";
    starline();
    cout << " char size   = 1 bytes";
    starline();
    cout << " int size    = 2 bytes";
    starline();
    cout << " long size   = 4 bytes";
    starline();
    cout << " float size  = 4 bytes";
    starline();
    cout << " double size = 8 bytes";
    starline();
    return 0;
}

// defination
void starline() {
    cout << "\n ******************** \n";
}


// cout << "\n -------------------- \n";