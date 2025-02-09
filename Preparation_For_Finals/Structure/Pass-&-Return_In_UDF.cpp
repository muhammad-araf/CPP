#include <iostream>
using namespace std;
struct data
{
    char name[50];
    int id;
    int age;
    int marks[5];
};
int udf(struct data user1)
{
    int sum = 0;
    cout << endl
         << "**************************" << endl;
    cout << "Your Name is : ";
    cout << user1.name << endl;
    cout << "Your Id is: ";
    cout << user1.id << endl;
    cout << "Your age: ";
    cout << user1.age << endl;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + user1.marks[i];
    }
    return sum;
}

int main()
{
    struct data user; // Declare structure variable local
    cout << "Enter name: ";
    cin.getline(user.name, 50);
    cout << "Enter Your Id: ";
    cin >> user.id;
    cout << "Enter your age: ";
    cin >> user.age;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter your " << i + 1 << " Subject Marks: ";
        cin >> user.marks[i];
    }
    int sum = udf(user);
    cout << endl
         << "Your Total marks Out of 500 is : " << sum;
    return 0;
}