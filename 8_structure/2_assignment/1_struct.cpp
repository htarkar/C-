#include <iostream>
using namespace std;

struct Book {
    char title[20];
    char author[20];
    int pages;
    float price;
};

int main(){
    Book b[5];
    int i, n;
    cout << "Total Book : ";
    cin >> n;
    for (i = 0; i < n; i++) {
        cout << "Enter Title : ";
        cin >> b[i].title;
        cout << "Enter Author : ";
        cin >> b[i].author;
        cout << "Enter Pages : ";
        cin >> b[i].pages;
        cout << "Enter Price : ";
        cin >> b[i].price;
    }

    for (i = 0; i < n; i++) {
        cout << "-----------" << endl;
        cout << "Book Title : " << b[i].title << endl;
        cout << "Book Author : " << b[i].author << endl;
        cout << "Book Pages : " << b[i].pages << endl;
        cout << "Book Price : " << b[i].price << endl;
        cout << "-----------" << endl;
    }

    return 0;
}