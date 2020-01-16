#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
    char s1[10] = "hello";
    char s2[10] = "Hello";

    cout << "strlen " << strlen(s1);
    cout << "strlwr " << strlwr(s2);
    cout << "strcmp " << strupr(s1);
    cout << "strcpy " << strcmp(s1,s2); // s1 < s2 = 1
    cout << "strupr " << strrev(s1);
    return 0;
}