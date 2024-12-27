// Comprehensive User Database Management System in C++
#include <iostream>
#include <string>
using namespace std;
struct user0
{
    int id;
    string name;
    int age;
} user[100];
int n = 1;
void show()
{
    if (n == 1)
    {
        cout << "PLease Create User First..." << endl;
        return;
    }
    for (int i = 0; i <= n; i++)
    {
        cout << "\n\n";
        cout << "-------- DATA --------" << endl;
        cout << "User ID :: " << user[i].id << endl;
        cout << "User Name :: " << user[i].name << endl;
        cout << "User Age :: " << user[i].age << endl;
    }
}
void data()
{
    char choice;
    do
    {
        cout << "\n----- For User " << n << " -----" << endl;
        cout << "Enter User ID: ";
        cin >> user[n].id;
        cout << "Enter User Name: ";
        cin >> user[n].name;
        cout << "Enter User Age: ";
        cin >> user[n].age;
        n++;

        if (n >= 100)
        {
            cout << "Maximum user limit reached....!" << endl;
            break;
        }

        cout << "Do you want to add more users?:: " << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;
        cin >> choice;
    } while (choice == '1');
}
int admin()
{
    char choice;
    do
    {
        cout << "---- Features ----" << endl;
        cout << " 1. Create User" << endl;
        cout << " 2. Show User Data" << endl;
        cout << " 3. Exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case '1':
            data();
            break;
        case '2':
            show();
            break;
        case '3':
            return 0;
            break;

        default:
            cout << "Incorrect Choice..." << endl;
            break;
        }

    } while (choice != 3);
}
int main()
{
    char choice;
    do
    {

        cout << "Who Are You..?" << endl;
        cout << "1. Admin" << endl;
        cout << "2. User" << endl;
        cout << "3.Exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case '1':
            admin();
            break;
        case '2':
            cout << "USER NOT DEFINE" << endl;
            break;
        case '3':
            cout << "Bye bye Take Care.....!" << endl;
            break;
        default:
            cout << "Incorrect Choice" << endl;
            break;
        }
    } while (choice != 3);

    return 0;
}