#include <iostream>
using namespace std;
int main()
{
    string inp1 = "hello";
    string inp2;
    cin >> inp2;
    int length = 0;
    int count = 0;
    for (int i = 0; inp1[i] != 0; i++)
    {
        length++;
        if (inp1[i] == inp2[i])
        {
            count++;
        }
    }
    if (count == length)
    {
        cout << "2 string is similar" << endl;
    }
    else
    {
        cout << "Yeh alag ha" << endl;
    }
    for (int i = length - 1; i >= 0; i--)
    {
        cout << inp2[i];
    }
}