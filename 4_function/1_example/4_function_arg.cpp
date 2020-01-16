#include <iostream>
using namespace std;

// declaration
float circleArea(float radius);

// calling
int main(){
    float radius;
    cout << "Enter radius ";
    cin >> radius;
    cout << circleArea(radius) << endl;
    return 0;
}

// defination
float circleArea(float r) { 
    float circle_area;
    circle_area = 3.14 * r * r;
    return circle_area;
}