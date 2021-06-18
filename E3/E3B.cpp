//Hickey, Thomas  Matzen    Fall 2013    Exercise 3B
//Overview:  Allows a user to input a first name, last name, and age and then outputs them
//Compiler Used:  G++ with TextPad editor
//Status:  Compiles and meets the requirements
//Help:  No help

#include <iostream>
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
cout << "Please enter your age: ";
cin >> age;
cout << endl << firstName << " " << lastName << " is " << age << " years old." << endl;
}
