
#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int rollNumber;
    string name;
    float grade;
};

const int MAX_STUDENTS = 100;
void addStudent(Student students[], int &count)
{
    if (count >= MAX_STUDENTS)
    {
        cout << "Student list is full. Cannot add more students.\n";
        return;
    }

    Student newStudent;
    cout << "Enter Roll Number: ";
    cin >> newStudent.rollNumber;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, newStudent.name);
    cout << "Enter Grade: ";
    cin >> newStudent.grade;

    students[count] = newStudent;
    count++;
    cout << "Student added successfully!\n";
}

void viewStudents(const Student students[], int count)
{
    if (count == 0)
    {
        cout << "No students available.\n";
        return;
    }
    cout << "List of Students:\n";
    for (int i = 0; i < count; i++)
    {
        cout << "Roll Number: " << students[i].rollNumber
             << ", Name: " << students[i].name
             << ", Grade: " << students[i].grade << endl;
    }
}

void searchStudent(const Student students[], int count)
{
    int rollNumber;
    cout << "Enter Roll Number to search: ";
    cin >> rollNumber;

    for (int i = 0; i < count; i++)
    {
        if (students[i].rollNumber == rollNumber)
        {
            cout << "Student Found!\n"
                 << "Roll Number: " << students[i].rollNumber
                 << ", Name: " << students[i].name
                 << ", Grade: " << students[i].grade << endl;
            return;
        }
    }
    cout << "Student with Roll Number " << rollNumber << " not found.\n";
}

// Main Function
int main()
{
    Student students[MAX_STUDENTS];
    int count = 0;
    int choice;

    do
    {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. View Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudent(students, count);
            break;
        case 2:
            viewStudents(students, count);
            break;
        case 3:
            searchStudent(students, count);
            break;
        case 4:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
