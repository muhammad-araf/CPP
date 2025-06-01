#include <iostream>
using namespace std;
int pointer(int *a)
{

    cout << "This pointer print in UDF: " << *a << endl;
    (*a)++;
    return *a;
}
int main()
{
    int var = 5;
    int p = pointer(&var);
    cout << "This pointer print in main function: " << p;
    return 0;
}