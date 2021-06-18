//Hickey, Thomas    Matzen    Fall 2013    Exercise 7
//Overview:  Gets three numbers from the user and then determines if any of them are the same
//Compiler Used:  G++ with TextPad editor
//Status:  Compiles and meets the requirements
//Help:  No help

#include <iostream>
using namespace std;
int main()
{
	int num1, num2, num3;

cout << "Please enter the first number (an integer): ";
	cin >> num1;
cout << "Please enter the second number (an integer): ";
	cin >> num2;
cout << "Please enter the second number (an integer): ";
	cin >> num3;
cout << endl;

if(num1==num2)
{
	if(num2==num3)
		cout << "All three numbers are the same.";
}

else if(num2==num3)
	cout << "Exactly two numbers are the same.";

else if(num1==num3)
	cout << "Exactly two numbers are the same.";

else
	cout << "None of the numbers are the same.";

cout << endl << endl;
}
