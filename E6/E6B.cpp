//Hickey, Thomas    Matzen    Fall 2013    Exercise 6B
//Overview:  Allows a user to input two numbers as a range and then determines if a third is in that range
//Compiler Used:  G++ with TextPad editor
//Status:  Compiles and meets the requirements
//Help:  No help

#include <iostream>
using namespace std;
int main()
{
	int low, high, num;

cout << "Please enter the lower limit (an integer): ";
	cin >> low;
cout << endl;
cout << "Please enter the upper limit (an integer): ";
	cin >> high;
cout << endl;
cout << "Please enter a number between " << low << " and " << high << ": ";
	cin >> num;
cout << endl;

if(low<=num)
	if(num<=high)
	cout << "Yes, " << num << " is between " << low << " and " << high << ".";
else
	cout << "No, " << num << " is not between " << low << " and " << high << ".";

cout << endl << endl;
}
