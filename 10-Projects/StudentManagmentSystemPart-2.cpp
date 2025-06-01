#include <iostream>
#include<string>
using namespace std;
int nost = 0;  //NOST (No of Student)
struct student {
    string name;
    int id = 0;
    string dept;
}s[100];


void inp(student s[]) {
    s[nost].id = nost;
    cout << "Enter your Name : " << endl;
    cin >> s[nost].name;
    cout << "Enter your Department : " << endl;
    cin >> s[nost].dept;
    s[nost].id++;
    cout << "Your Id is " << s[nost].id << endl;
    cout << "********************" << endl;
    nost++;
}
void out(){
    cout << "****** DATA ******" << endl;
    for (int i = 0;i <= nost-1;i++) {
        cout << "Name : ";
        cout << s[i].name << endl;
        cout << "ID : ";
        cout << s[i].id << endl;
        cout << "Department : ";
        cout << s[i].dept << endl;
        cout << "********************" << endl;
    }
}
void search() {
    int id;
    cout << "Enter Student ID : ";
    cin >> id;
    for (int i = 0;i <= nost-1;i++) {
        if (s[i].id == id) {
            cout << "*** Founded ***" << endl;
            cout << "Name : ";
            cout << s[nost-1].name << endl;
            cout << "ID : ";
            cout << s[nost-1].id << endl;
            cout << "Department : ";
            cout << s[nost-1].dept << endl;
        }
        else {
            cout << "Not Found..!" << endl;
        }


        cout << "********************" << endl;
    }
}
void update() {
    int id;
    cout << "Enter Student ID : ";
    cin >> id;
    
    for (int i = 0;i <= nost-1;i++) {
        if (s[i].id == id) {
            cout << "*** Founded ***" << endl;
            cout << "Enter a Name " << endl;
            cin >> s[id-1].name;
            cout << "Enter Department " << endl;
            cin >> s[id-1].dept;
            cout << "Your Information is Updated Successfully" << endl;
        }
        else {
            cout << "********* Not Found..!" << endl;
        }


        cout << "********************" << endl;
    }

}
void dlt() {
    int id;
    cout << "Enter Student ID: ";
    cin >> id;
    int index = -1;

    for (int i = 0; i < nost; i++) {
        if (s[i].id == id) {
            string confirm;
            system("Color 04");
            cout << "The Student Data has been Targeted."<<endl<<" type confirm to Delete the Student Data" << endl;
            cin >> confirm;
            if (confirm == "confirm") {
                index = i;
                system("Color 0A");

                cout << "Student Deleted Successfully" << endl;
                break;
                
            }
            else {
                cout << "Not Comfirmed" << endl;
            }
        }
        else {
            cout << "Not Found..!" << endl;
            return;
        }
    }

    for (int i = index; i < nost - 1; i++) {
        s[i] = s[i + 1];
    }

    nost--;


}


int main() {
    system("color 0A");
    char choice;
    do {
        cout << " 1. Adding a new student" << endl;
        cout << " 2. Displaying all students." << endl;
        cout << " 3. Searching for a student by ID." << endl;
        cout << " 4. Updating student information." << endl;
        cout << " 5. Deleting a student." << endl;
        cout << " 6. Exit." << endl;
        cin >> choice;
        switch (choice)
        {
        case '1':
            inp(s);
            break;

        case '2':
            out();
            break;

        case '3':
            search();
            break;

        case '4':
            update();
            break;

        case '5':
            dlt();
            break;

        case '6':
            cout << "Byee..!" << endl;
            break;

        default:
            cout << "Invalid input" << endl;
            break;
        }

    } while (choice != '6');
    return 0;
}