#include <iostream>
using namespace std;

struct Book {
    char title[20];
    char author[20];
    int pages;
    float price;
};

int main(){
    Book b[2];
    cout << "Enter Title : ";
    cin >> b[1].title;
    cout << "Enter Author : ";
    cin >> b[1].author;
    cout << "Enter Pages : ";
    cin >> b[1].pages;
    cout << "Enter Price : ";
    cin >> b[1].price;
    cout << endl;
    
    cout << "Enter Title : ";
    cin >> b[2].title;
    cout << "Enter Author : ";
    cin >> b[2].author;
    cout << "Enter Pages : ";
    cin >> b[2].pages;
    cout << "Enter Price : ";
    cin >> b[2].price;

    cout << "-----------" << endl;
    cout << "Book Title : " << b[1].title << endl;
    cout << "Book Author : " << b[1].author << endl;
    cout << "Book Pages : " << b[1].pages << endl;
    cout << "Book Price : " << b[1].price << endl;
    cout << "-----------" << endl;

    cout << "-----------" << endl;
    cout << "Book Title : " << b[2].title << endl;
    cout << "Book Author : " << b[2].author << endl;
    cout << "Book Pages : " << b[2].pages << endl;
    cout << "Book Price : " << b[2].price << endl;
    cout << "-----------" << endl;

    return 0;
}