#include <iostream>
using namespace std;
struct user
{
    int id;
    char name[50];
    int marks[5];
};

struct user func2(int minMarks)
{
    struct user student2;

    cout << endl
         << "------------ UDF :2 -----------" << endl;
    cout << "Enter your id : ";
    cin >> student2.id;
    cout << "Enter your name : ";
    cin >> student2.name;
    for (int i = 0; i <= 4; i++)
    {
        cout << "Enter your " << i + 1 << " mark : ";
        cin >> student2.marks[i];
    }
    int maxMarks = student2.marks[0];
    for (int i = 1; i <= 4; i++)
    {

        if (maxMarks < student2.marks[i])
        {
            maxMarks = student2.marks[i];
        }
    }
    cout << endl
         << "Your Min marks is " << minMarks << endl;
    cout << "Your Max marks is " << maxMarks;

    return student2;
}

struct user func1(struct user student1)
{
    int minMarks;
    cout << endl
         << "------------ UDF :1 -----------" << endl
         << "Proccess : Minmarks......" << endl;
    minMarks = student1.marks[0];
    for (int i = 1; i <= 4; i++)
    {

        if (minMarks > student1.marks[i])
        {
            minMarks = student1.marks[i];
        }
    }

    func2(minMarks);
    return student1;
}

int main()
{
    struct user student1;
    cout << endl
         << "------------ Main -----------" << endl
         << endl;
    cout << "Enter your id : ";
    cin >> student1.id;
    cout << "Enter your name : ";
    cin >> student1.name;
    for (int i = 0; i <= 4; i++)
    {
        cout << "Enter your " << i + 1 << " mark : ";
        cin >> student1.marks[i];
    }
    func1(student1);

    return 0;
}