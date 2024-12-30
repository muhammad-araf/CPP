#include <iostream>
using namespace std;
struct member
{
    string name;
    int age;
    int marks[6];
};
int avgmarks(int marks[])
{
    int sum = 0;
    for (int i = 0; i < 6; i++)
    {
        sum += marks[i];
    }

    return sum;
}
int main()
{
    member members;
    members.name = "Araf";
    members.age = 20;
    for (int i = 0; i < 6; i++)
    {
        cout << "Enter the marks of subject " << i + 1 << " : ";
        cin >> members.marks[i];
    }
    int sum = avgmarks(members.marks);

    cout << "The average marks of the student is : " << sum / 6 << "%" << endl;

    return 0;
}