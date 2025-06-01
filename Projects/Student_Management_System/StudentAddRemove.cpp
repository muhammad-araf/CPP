#include<iostream>
#include<string.h>
using namespace std;
struct students {
	char name[50];
	int rollNumber;
	float marks[3];
}student;
void addStudent() {
	cout << "********* Student Add & Show Program *********" << endl;
	cout << "Enter your name: ";
	cin.getline(student.name, 50);
	cout << "Enter your roll number: ";
	cin >> student.rollNumber;
	for (int i = 0; i <= 2; i++)
	{
		cout << " Enter your " << i + 1 << " marks ";
		cin >> student.marks[i];
	}
}
void displayStudents()
{
	cout << endl;
	cout << "**** Display Student Data ****" << endl;
	cout << "Your Name is : " << student.name << endl;
	cout << "Your rollNumber is : " << student.rollNumber << endl;
	for (int i = 0; i <= 2; i++)
	{
		cout << "Your  " << i + 1 << "  marks is ";
		cout << student.marks[i] << endl;
	}

}
void sum()
{
	cout << endl;
	int sum = 0;
	for (int i = 0; i <= 2; i++)
	{
		sum = sum + student.marks[i];
	}
	cout << "Your Total Marks is :" << sum;
}
int main()
{
	addStudent();
	displayStudents();
	sum();
	return 0;
}