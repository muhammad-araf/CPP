#include <iostream>
#include <math.h>
using namespace std;
void udf1(int a)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << a << " x " << i << " = " << i * a << endl;
    }
}
int udf1(float a, float b, float c)
{
    float sum = pow(a, 2) + pow(b, 2) + pow(c, 2);
    return sum;
}
float udf1(int a, int b, int c, int d)
{
    float avg = (a + b + c + d) / 4;
    return avg;
}
int main()
{
    int a = 5;
    //----------
    float x, y, z;
    x = 2.2;
    y = 3.2;
    z = 4.2;
    //-----------
    int p, q, r, s;
    p = 2;
    q = 3;
    r = 4;
    s = 6;
    //------------
    udf1(a);
    int sum = udf1(x, y, z);
    float avg = udf1(p, q, r, s);
    cout << avg << endl;

    return 0;
}