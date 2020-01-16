#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    char title[20];
    char author[20];
    int pages;
    float price;

    cout << "Enter Title : ";
    gets(title);
    cout << "Enter Author : ";
    gets(author);
    cout << "Enter Pages : ";
    cin >> pages;
    cout << "Enter Price : ";
    cin >> price;

    cout << "-----------" << endl;
    cout << "Book Title : " << title << endl;
    cout << "Book Author : " << author << endl;
    cout << "Book Pages : " << pages << endl;
    cout << "Book Price : " << price << endl;
    cout << "-----------" << endl;

    return 0;
}