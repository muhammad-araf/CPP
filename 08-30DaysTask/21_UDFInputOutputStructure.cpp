#include <iostream>
using namespace std;
struct students
{
    char name[50];
    int id;
    float gpa;
    int marks[5];
} student;
void udf(students student2)
{
    cout << "-------------------------------------" << endl;
    cout << "*** Student 2 delare in local in main ***" << endl;
    cout << " Enter your name: " << endl;
    cout << student2.name;
    cout << " Enter your id: " << endl;
    cout << student2.id;
    cout << " Enter your GPA: " << endl;
    cout << student2.gpa;
    for (int i = 0; i < 5; i++)
    {
        cout << " Enter your Marks of subject " << i + 1 << " ";
        cout << student2.marks[i] << endl;
    }
    cout << "*** Student 1 delare in Global ***";
    cout << " Enter your name: " << endl;
    cout << student.name;
    cout << " Enter your id: " << endl;
    cout << student.id;
    cout << " Enter your GPA: " << endl;
    cout << student.gpa;
    for (int i = 0; i < 5; i++)
    {
        cout << " Enter your Marks of subject " << i + 1 << " ";
        cout << student.marks[i] << endl;
    }
}
int main()
{
    students student2;
    cout << "---Student 1 Data ---" << endl;
    cout << " Enter your name: ";
    cin >> student2.name;
    cout << " Enter your id: ";
    cin >> student2.id;
    cout << " Enter your GPA: ";
    cin >> student2.gpa;
    for (int i = 0; i < 5; i++)
    {
        cout << " Enter your Marks of subject " << i + 1 << " ";
        cin >> student2.marks[i];
    }

    cout << "---Student 2 Data ---" << endl;
    cout << " Enter your name: ";
    cin >> student.name;
    cout << " Enter your id: ";
    cin >> student.id;
    cout << " Enter your GPA: ";
    cin >> student.gpa;
    for (int i = 0; i < 5; i++)
    {
        cout << " Enter your Marks of subject " << i + 1 << " ";
        cin >> student.marks[i];
    }

    udf(student2);
    return 0;
}