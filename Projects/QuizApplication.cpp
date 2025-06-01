#include<iostream>
using namespace std;
int main()
{
    int input1, input2, input3,input4,input5 ,input6;
    int score=0;
    cout << "\t\t\t***** Welcopme Quiz Application *****"<<endl;
    string a;
    cout << "type araf and then press enter to start;"<<endl;
    cin >> a;
    cout << "Question 1:" << endl << "What is the sum of 40 and 60? "<<endl << endl;
    cin >> input1;
    cout << "Question 2:" << endl << "What is the sum of 20 and 30? "<<endl << endl;
    cin >> input2;
    cout << "Question 3:" << endl << "What is the division of 100 with 10? "<<endl << endl;
    cin >> input3;
    cout << "Question 4:" << endl << "What is the substract of 60 with 40? "<<endl << endl;
    cin >> input4;
    cout << "Question 5:" << endl << "What is the sum of 560 and 400?"<<endl << endl;
    cin >> input5;
    cout << "Question 6:" << endl << "differentiate x, x wrt y"<<endl << endl;
    cin >> input6;


    if (input1 == 100) {
        score = score + 1;
    }else
    {
        score = score;
    }

    if (input2 == 50) {
        score = score + 1;
    }
    else
    {
        score = score;
    }
    if (input3 == 10) {
        score = score + 1;
    }
    else
    {
        score = score;
    }
    if (input4 == 20) {
        score = score + 1;
    }
    else
    {
        score = score;
    }
    if (input5 == 960) {
        score = score + 1;
    }
    else
    {
        score = score;
    }
    if (input6 == 1) {
        score = score + 1;
    }
    else
    {
        score = score;
    }

    cout << "NICE Your score is "<<score;

    
}