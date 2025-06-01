#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "hello ";
    string str2 = "world";
    str.append(str2);
    cout << str;
    return 0;
}