#include <iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;

int main(){
    char a = 'h';

    cout << "isalnum " << isalnum(a) << endl;
    cout << "isdigit " << isdigit(a) << endl;
    cout << "islower " << islower(a) << endl;
    cout << "isupper " << isupper(a) << endl; 
    cout << "isspace " << isspace(a) << endl;
    return 0;
}