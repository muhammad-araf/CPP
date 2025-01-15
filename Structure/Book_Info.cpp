#include <iostream>
#include <string>
using namespace std;
struct Book
{
    string title;
    string author;
    int year;
};

int main()
{
    Book book1;

    cout << "Enter book title: ";
    getline(cin, book1.title);

    cout << "Enter book author: ";
    getline(cin, book1.author);

    cout << "Enter book publication year: ";
    cin >> book1.year;
    cout << endl;
    cout << "Book Details: " << endl;
    cout << "Title: " << book1.title << endl;
    cout << "Author: " << book1.author << endl;
    cout << "Year: " << book1.year << endl;

    return 0;
}
