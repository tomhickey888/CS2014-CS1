//Hickey, Thomas  Matzen    Fall 2013    Exercise 3A
//Overview:  Allows a user to input 3 intergers and then outputs them
//Compiler Used:  G++ with TextPad editor
//Status:  Compiles and meets the requirements
//Help:  No help

#include <iostream>
using namespace std;
int main()
{
	int num1;
	int num2;
	int num3;

cout << "Please enter number 1: ";
cin >> num1;
cout << "Please enter number 2: ";
cin >> num2;
cout << "Please enter number 3: ";
cin >> num3;
cout << endl << "The numbers are " << num1 << ", " << num2 << ", and " << num3 << "." << endl;
}
