#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
    char name[100];
    int a, count;
    cout << "Enter a name : ";
    gets(name);
    count = strlen(name);
    cout << "The Length of name is " << count;
    return 0;
}