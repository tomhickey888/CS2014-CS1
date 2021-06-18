//Hickey, Thomas    Matzen    Fall 2013    Exercise 4A
//Overview:  Allows a user to input information and then outputs it and formats it into a table
//Compiler Used:  G++ with TextPad editor
//Status:  Compiles and meets the requirements
//Help:  No help

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	string firstName;
	string lastName;
	int age;

cout << "Please enter your first name: ";
	cin >> firstName;
cout << "Please enter your last name: ";
	cin >> lastName;
cout << "Please enter your age (integer): ";
	cin >> age;
cout << endl;

cout << left << setw(12) << "First Name:" << setw(12) << "Last Name:" << setw(7) << "Age:" << endl
	 << setw(12) << firstName << setw(12) << lastName << setw(7) << age << endl << endl;

}
