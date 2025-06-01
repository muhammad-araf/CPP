#include <iostream>
using namespace std;

int main() {
    int age = 16;
    float height = 5.9;
    char grade = 'A';
    bool isStudent = true;

    // Display variables
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " feet" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is a student? " << (isStudent ? "Yes" : "No") << endl;

    return 0;
}
