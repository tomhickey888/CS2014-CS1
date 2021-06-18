//Hickey, Thomas    Matzen    Fall 2013    Exercise 6A
//Overview:  Allows a user to input two numbers and then outputs a message comparing those numbers
//Compiler Used:  G++ with TextPad editor
//Status:  Compiles and meets the requirements
//Help:  No help

#include <iostream>
using namespace std;
int main()
{
	int num1, num2;

cout << "Please enter the first number (an integer): ";
	cin >> num1;
cout << "Please enter the second number (an integer): ";
	cin >> num2;
cout << endl;

if(num1>num2)
	cout << "First number is greater than second number.";

if(num1<num2)
	cout << "Second number is greater than first number.";

if(num1==num2)
	cout << "First number and second number are the same.";

cout << endl << endl;
}
