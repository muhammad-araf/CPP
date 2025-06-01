#include <iostream>
using namespace std;

int main()
{
    char name[20];
    cin >> name;

    for (int i = 0; i < 20; i++)
    {
        if (name[i] == '\0')
        {
            break;
        }
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] = name[i] - 32; // lower --> upper
        }
    }

    for (int i = 0; i < 20; i++)
    {
        if (name[i] == '\0')
        {
            break;
        }
        cout << name[i];
    }

    return 0;
}
