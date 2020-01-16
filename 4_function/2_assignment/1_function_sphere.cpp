#include <iostream>
using namespace std;

float sphere(float r);

int main(){
    float r;
    cout << "Enter radius : ";
    cin >> r;
    cout << "Volume of Sphere : " << sphere(r) << endl;
    return 0;
}

float sphere(float r) { 
    return (4/3) * 3.14 * r * r * r;
}

// Enter radius : 3
// Volume of Sphere : 84.78

// (4/3) * 3.14 * r * r * r