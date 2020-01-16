#include <iostream>
using namespace std;

int cube(int w, int l, int h);

int main(){
    int w,l,h;
    cout << "Enter width : ";
    cin >> w;
    cout << "Enter length : ";
    cin >> l;
    cout << "Enter height : ";
    cin >> h;
    cout << "Volume of Rectangle Cube : " << cube(w,l,h) << endl;
    return 0;
}

int cube(int w, int l, int h) { 
    return w * l * h;
}

// Enter width : 2
// Enter length : 3
// Enter height : 4
// Volume of Rectangle Cube : 24

// w * l * h