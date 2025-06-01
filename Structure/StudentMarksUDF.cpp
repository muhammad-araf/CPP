#include <iostream>
#include <cstring>
using namespace std;

struct User
{
    int id;
    char name[50];
    int marks[5];
};

int udf2(int minMarks)
{
    User student2;

    cout << endl
         << "------------ UDF :2 -----------" << endl;
    cout << "Enter your ID: ";
    cin >> student2.id;
    cout << "Enter your Name: ";
    cin.ignore();
    cin.getline(student2.name, 50);

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter your " << i + 1 << " mark: ";
        cin >> student2.marks[i];
    }

    int maxMarks = student2.marks[0];
    for (int i = 1; i < 5; i++)
    {
        if (maxMarks < student2.marks[i])
        {
            maxMarks = student2.marks[i];
        }
    }

    cout << endl
         << "Your Min Marks is: " << minMarks << endl;
    cout << "Your Max Marks is: " << maxMarks << endl;

    int sum = minMarks + maxMarks;
    return sum;
}

int udf1(const User &student1)
{
    int minMarks = student1.marks[0];
    for (int i = 1; i < 5; i++)
    {
        if (minMarks > student1.marks[i])
        {
            minMarks = student1.marks[i];
        }
    }

    cout << endl
         << "------------ UDF :1 -----------" << endl
         << "Process: Calculating Min Marks..." << endl;

    return udf2(minMarks);
}

int main()
{
    User student1;

    cout << "Q - Input Student 1 Data in main, pass to UDF1 to calculate min marks, "
            "then UDF2 calculates max marks of Student 2. Finally, main prints sum of min and max marks."
         << endl
         << endl;

    cout << "------------ Main -----------" << endl;
    cout << "Enter your ID: ";
    cin >> student1.id;
    cout << "Enter your Name: ";
    cin.ignore();
    cin.getline(student1.name, 50);

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter your " << i + 1 << " mark: ";
        cin >> student1.marks[i];
    }

    cout << "---------- Main Process ----------" << endl;
    int sum = udf1(student1);

    cout << "The Sum of Min Marks and Max Marks is: " << sum << endl;

    return 0;
}