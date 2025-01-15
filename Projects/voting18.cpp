#include <iostream>
using namespace std;
int main() {
    string name;
    int age;
    double weight;
    char gender;

    cout << "Enter your Name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your height (inch): ";
    cin >> weight;
    cout << "Enter your gender (M/F): "<<endl;
    cin >> gender;
 
    cout << "\t\t *****Your DATA*****";
    cout << "\n\n\t\t Your Name: "<<name<<endl;
    cout << "\t\tYour Age: " << age << endl;
    cout << "\t\tYour Weight: " << weight << " kg" << endl;
    cout << "\t\tYour Gender: " << gender << endl;
    if (age >= 18) {
        cout << "\n*****You are eligible to vote.*****" << endl;
    }
    else {
        cout << "\n******You are not eligible to vote.*****" <<endl;
    }

    return 0;
}
