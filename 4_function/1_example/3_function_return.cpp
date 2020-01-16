#include <iostream>
using namespace std;

// declaration
float circleArea();

// calling
int main(){
    cout << circleArea();
    return 0;
}

// defination
float circleArea() { 
    float circle_area, radius;
    radius  = 2;
    circle_area = 3.14 * radius * radius;
    return circle_area;
}