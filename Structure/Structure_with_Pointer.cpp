#include <iostream>
using namespace std;

struct Student
{
    string name;
    int rollNumber;
    float marks;
};

int main()
{
    Student *ptr = new Student;

    cout << "Enter student name: ";
    cin >> ptr->name;
    cout << "Enter roll number: ";
    cin >> ptr->rollNumber;
    cout << "Enter marks: ";
    cin >> ptr->marks;

    cout << "\nStudent Details:\n";
    cout << "Name: " << ptr->name << endl;
    cout << "Roll Number: " << ptr->rollNumber << endl;
    cout << "Marks: " << ptr->marks << endl;

    delete ptr;

    return 0;
}
