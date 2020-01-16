#include <iostream>
using namespace std;

float cylinder(float r, float h);

int main(){
    float r,h;
    cout << "Enter radius : ";
    cin >> r;
    cout << "Enter height : ";
    cin >> h;
    cout << "Volume of Cylinder : " << cylinder(r,h) << endl;
    return 0;
}

float cylinder(float r, float h) { 
    return (1.0/3.0) * 3.14 * r * r * h;
}

// Enter radius : 3
// Enter height : 4
// Volume of Cylinder : 37.68

// (1.0/3.0) * 3.14 * r * r * h