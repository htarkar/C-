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
    Book b1, b2;
    cout << "Enter Title : ";
    gets(b1.title);
    cout << "Enter Author : ";
    gets(b1.author);
    cout << "Enter Pages : ";
    cin >> b1.pages;
    cout << "Enter Price : ";
    cin >> b1.price;
    cout << endl;
    
    cout << "Enter Title : ";
    gets(b2.title);
    cout << "Enter Author : ";
    gets(b2.author);
    cout << "Enter Pages : ";
    cin >> b2.pages;
    cout << "Enter Price : ";
    cin >> b2.price;

    cout << "-----------" << endl;
    cout << "Book Title : " << b1.title << endl;
    cout << "Book Author : " << b1.author << endl;
    cout << "Book Pages : " << b1.pages << endl;
    cout << "Book Price : " << b1.price << endl;
    cout << "-----------" << endl;

    cout << "-----------" << endl;
    cout << "Book Title : " << b2.title << endl;
    cout << "Book Author : " << b2.author << endl;
    cout << "Book Pages : " << b2.pages << endl;
    cout << "Book Price : " << b2.price << endl;
    cout << "-----------" << endl;

    return 0;
}