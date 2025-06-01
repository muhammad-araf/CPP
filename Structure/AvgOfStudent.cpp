#include <iostream>
using namespace std;
struct data
{
    int id;
    char name[20];
    int marks[3];
};
int main()
{
    int avg[3] = {0, 0, 0};
    int finalavg = 0;
    struct data student[3];
    for (int j = 0; j < 3; j++)
    {
        cout << "For Student " << j + 1 << endl;
        cout << "Enter student id: ";
        cin >> student[j].id;
        cout << "Enter student name: ";
        cin >> student[j].name;
        cout << "Enter marks of 3 subjects: ";

        for (int i = 0; i < 3; i++)
        {
            cin >> student[j].marks[i];
        }

        for (int i = 0; i < 3; i++)
        {
            avg[j] = student[j].marks[i] + avg[j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        avg[i] = avg[i] / 3;
        finalavg = finalavg + avg[i];
    }
    finalavg = finalavg / 3;
    cout << "The average of all students is: " << finalavg << endl;
}