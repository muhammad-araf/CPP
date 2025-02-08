#include <iostream>
using namespace std;
string string0()
{
    string str;
    cout << "Enter the String In UDF: 1 : ";
    cin >> str;
    return str;
}
int length0(string str)
{
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}
int main()
{
    string str = string0();
    int length = length0(str);
    cout << length;
}