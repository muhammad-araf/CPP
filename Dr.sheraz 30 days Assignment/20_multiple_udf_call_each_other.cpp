Q - 20
#include <iostream>
#include <math.h>
    using namespace std;
int udf2(int x)
{

    float y = sqrt(x);
    return y;
}
float udf3(float x, float y, float z)
{
    cout << "UDF:3 ------- UDF3 Calculating sum a,b,c value and return to UDF 1 " << endl;
    float sum = x + y + z;
    return sum;
}

float udf1(int a, int b, int c)
{
    cout << "UDF:1 ------- UDF1 call to UDF 2 For Square Root and return it" << endl;
    float ansA = udf2(a);
    float ansB = udf2(b);
    float ansC = udf2(c);
    cout << "UDF:1 ------- UDF1 call UDF 3 with parameter a,b,c For Calculating Sum of Square Root and return it" << endl;
    float sum = udf3(ansA, ansB, ansC);
    cout << "UDF:1 ------- UDF1 Return sum of a,b,c to MAIN" << endl;
    return sum;
}

int main()
{
    int a, b, c;
    cout << "------- Main --------" << endl;
    cout << "Input a value : ";
    cin >> a;
    cout << "Input b value : ";
    cin >> b;
    cout << "Input c value : ";
    cin >> c;

    float sum = udf1(a, b, c);
    cout << "---- MAIN Print Sum-----" << endl;
    cout << "The sum of Square Root is : " << sum;

    return 0;
}