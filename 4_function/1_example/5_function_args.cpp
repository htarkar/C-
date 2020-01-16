#include <iostream>
using namespace std;

// declaration
int rectangleArea(int width, int height);

int width; // global variable

// calling
int main(){
    int width, height; // local variable
    cout << "Enter width and height ";
    cin >> width >> height;
    // parameter
    cout << rectangleArea(width, height) << endl;
    return 0;
}

// defination
// args
int rectangleArea(int w, int h) { 
    int rectangle_area;
    rectangle_area = w * h;
    return rectangle_area;
}