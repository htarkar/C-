#include <iostream>
#include <stdio.h>
using namespace std;

struct Book {
    char title[20];
    char author[20];
    int pages;
    float price;
};

int main(){
    Book b;
    cout << "Enter Title : ";
    gets(b.title);
    cout << "Enter Author : ";
    gets(b.author);
    cout << "Enter Pages : ";
    cin >> b.pages;
    cout << "Enter Price : ";
    cin >> b.price;

    cout << "-----------" << endl;
    cout << "Book Title : " << b.title << endl;
    cout << "Book Author : " << b.author << endl;
    cout << "Book Pages : " << b.pages << endl;
    cout << "Book Price : " << b.price << endl;
    cout << "-----------" << endl;

    return 0;
}