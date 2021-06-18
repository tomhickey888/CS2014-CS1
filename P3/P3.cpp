//Hickey, Thomas  Matzen    Fall 2013    Program P3
//Overview:  An interactive program to calculates the weekly paycheck of one employee
//Compiler Used:  G++ with TextPad editor
//Status:  Compiles and meets the requirements
//Help:  No help

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;
int main()
{

//Define variables
	float hours, rate, check, otHours, otPay;
	int emplID;
	string name;

//Get input from the user on the week in question with defensive programming
cout << "Please enter the Employee's last name: ";
	cin >> name;

cout << "Please enter the employee ID for " << name << ": ";
	cin >> emplID;

if(emplID<1000)
{
	cout << endl << "Invalid employee ID.  Exiting program." << endl << endl;
	exit(0);
}
else if(emplID>9999)
{
	cout << endl << "Invalid employee ID.  Exiting program." << endl << endl;
	exit(0);
}

cout << "Please enter the hours worked by employee " << emplID << ": ";
	cin >> hours;

if(hours<0)
{
	cout << endl << "Invalid number of hours worked. See management. Exiting program." << endl << endl;
	exit(0);
}
else if(hours>100)
{
	cout << endl << "Invalid number of hours worked. See management. Exiting program." << endl << endl;
	exit(0);
}

cout << "Please enter the hourly wage for " << name << "\\Employee " << emplID << ": ";
	cin >> rate;

cout << endl << endl;

//Calculate the amount of the paycheck and store in the check variable
if(hours<=40)
	check = hours * rate;
else
{
	otHours = hours - 40;
	otPay = otHours * (rate * 1.5);
	check = (40 * rate) + otPay;
}

//Display the employees entered information and paycheck
cout << left << setw(24) << "NAME" << setw(6) << "ID" << right << setw(6) << "HOURS" << setw(8) << "RATE"
	 << setw(12) << "PAYCHECK" << endl << left << setw(24) << name << setw(6) << emplID << right << setw(6) << hours
	 << setprecision(2) << fixed << setw(8) << rate << setw(12) << check << endl << endl;

//Display if the employee in question worked overtime
if(hours>40)
	cout << "Employee " << emplID << " worked overtime." << endl << endl;
else
	cout << "Employee " << emplID << " did not work overtime." << endl << endl;

}
