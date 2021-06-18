//Hickey, Thomas  Matzen    Fall 2013    Exercise 4B
//Overview:  Asks a user to input payroll information, then calculates a paycheck amount and outputs it in table formatting
//Compiler Used:  G++ with TextPad editor
//Status:  Compiles and meets the requirements
//Help:  No help

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	string lastName;
	float hours, payRate, payCheck;

cout << "Please enter the last name: ";
	cin >> lastName;
cout << "Please enter the number of hours worked this week: ";
	cin >> hours;
cout << "Please enter the hourly pay rate: ";
	cin >> payRate;
cout << endl;

payCheck = hours * payRate;

cout << fixed << showpoint << setprecision(2)
	 << left << setw(12) << "Name" << right << setw(12) << "Paycheck" << endl
	 << left << setw(12) << lastName << right << setw(12) << payCheck << endl
	 << endl;

}
