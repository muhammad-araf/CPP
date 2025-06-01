#include <iostream>
using namespace std;
struct students
{
    char name[50];
    int id;
    float gpa;
    int marks[5];
};
int udf(students student)
{
    int sum = 0;
    for (int i = 0; i <= 4; i++)
    {
        sum += student.marks[i];
    }
    return sum;
}
int main()
{
    students student;

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

    int sum = udf(student);
    cout << "The sum of all marks is " << sum;
    return 0;
}