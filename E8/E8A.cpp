//Hickey, Thomas    Matzen    Fall 2013    Exercise 8A
//Overview:  Gets input from the user and then outputs which selection they made
//Compiler Used:  G++ with TextPad editor
//Status:  Compiles and meets the requirements
//Help:  No help

#include <iostream>
using namespace std;

int main()
{
	char choice;

cout << "Enter A, B, or C: ";
	cin >> choice;

if(choice=='A')
	cout << "You entered A.\n";
else if(choice=='B')
	cout << "You entered B.\n";
else if(choice=='C')
	cout << "You entered C.\n";
else
	cout << "You did not enter A, B, or C.\n";

cout << endl << endl;
}
