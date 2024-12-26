#include <iostream>
#include <string>
using namespace std;

int main()
{
    string names[10];     // Array to store student names, maximum 10
    float grades[10];     // Array to store student grades
    int studentCount = 0; // To keep track of added students
    int choice;

    cout << "\t\tSTUDENT GRADE MANAGEMENT SYSTEM\n";

    do
    {
        cout << "\n--- Simple Student Grade System ---\n";
        cout << "1. Add a new student\n";
        cout << "2. Display all students' details\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (cin.fail())
        { // Check if a non-integer was entered for choice
            cout << "Invalid input. Please enter a number.\n";
            cin.clear();            // Clear the error flag on cin
            cin.ignore(1000, '\n'); // Ignore invalid input
            continue;
        }

        switch (choice)
        {
        case 1:
        {
            if (studentCount < 10)
            {
                cout << "Enter student name: ";
                cin >> names[studentCount];

                cout << "Enter student grade (0-100): ";
                cin >> grades[studentCount];

                if (cin.fail())
                { // Check if a non-integer was entered for grade
                    cout << "Invalid input. Please enter a number for the grade.\n";
                    cin.clear();            // Clear the error flag on cin
                    cin.ignore(1000, '\n'); // Ignore invalid input
                    continue;
                }

                if (grades[studentCount] < 0 || grades[studentCount] > 100)
                {
                    cout << "Invalid grade. Please enter a grade between 0 and 100.\n";
                    grades[studentCount] = 0; // Reset invalid grade
                }
                else
                {
                    studentCount++; // Increase the student count after valid input
                }
            }
            else
            {
                cout << "Maximum number of students reached.\n";
            }
            break;
        }

        case 2:
        {
            if (studentCount == 0)
            {
                cout << "No students entered yet.\n";
            }
            else
            {
                cout << "\n--- All Students Details ---\n";
                for (int i = 0; i < studentCount; i++)
                {
                    cout << "Student " << i + 1 << ":\n";
                    cout << "Name: " << names[i] << endl;
                    cout << "Grade: " << grades[i] << endl;
                    if (grades[i] >= 50)
                    {
                        cout << names[i] << " Passed!\n";
                    }
                    else
                    {
                        cout << names[i] << " Failed!\n";
                    }
                    cout << "--------------------------\n";
                }
            }
            break;
        }

        case 3:
        {
            cout << "\nExiting the system. Thank you for using the Student Grade Management System!\n";
            break;
        }

        default:
        {
            cout << "Invalid input. Please choose a number between 1 and 3.\n";
            break;
        }
        }
    } while (choice != 3);

    return 0;
}
