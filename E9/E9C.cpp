//Hickey, Thomas    Matzen    Fall 2013    Exercise 9C
//Overview:  Gets a number from the user and then checks if it is between 1 & 10
//Compiler Used:  G++ with TextPad editor
//Status:  Compiles and meets the requirements
//Help:  No help

#include <iostream>
using namespace std;

int main()
{
	int num1;
	const int MIN=1;
	const int MAX=10;

cout << "Please enter a number between 1 and 10: ";
	cin >> num1;

while(num1 < MIN || num1 > MAX)
{
	cout << "No, " << num1 << " is not between 1 and 10." << endl;

	cout << "Please enter a number between 1 and 10: ";
	cin >> num1;

}

cout << endl << "Yes. " << num1 << " is between 1 and 10." << endl << endl;

}
