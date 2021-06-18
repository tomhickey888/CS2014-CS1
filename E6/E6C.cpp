//Hickey, Thomas    Matzen    Fall 2013    Exercise 6A
//Overview:  Adds a conditional statement to E6A that allows the user to decide to run the program or not
//Compiler Used:  G++ with TextPad editor
//Status:  Compiles and meets the requirements
//Help:  Help from Matzen with compound else statement ({ })

#include <iostream>
using namespace std;
int main()
{
	int num1, num2;
	string runCheck;

cout << "Do you want to run this program (Y/N): ";
	cin >> runCheck;

if(runCheck=="N")
	cout << endl << "Bye-Bye!" << endl << endl;
else
	{
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

	cout << endl << endl << "Bye-Bye!" << endl << endl;
	}
}
