//Hickey, Thomas    Matzen    Fall 2013    Exercise 8A
//Overview:  Gets input from the user and then outputs if it is a pre-selected "magic number" and, if so, whether it is an even or odd number.
//Compiler Used:  G++ with TextPad editor
//Status:  Compiles and meets the requirements
//Help:  No help

#include <iostream>
using namespace std;

int main()
{
	int choice;

cout << "Enter a number (integer): ";
	cin >> choice;

switch(choice)
{
	case 1:
	case 3:
	case 7:
	case 13:
	case 29:
	case 55:
	case 77:
	case 111: cout << choice << " is an odd magic number.";
	break;
	case 2:
	case 6:
	case 10:
	case 26:
	case 66:
	case 100:
	case 144: cout << choice << " is an even magic number.";
	break;
	default: cout << choice << " is not a magic number.\n";
	break;
}
cout << endl << endl;
}
