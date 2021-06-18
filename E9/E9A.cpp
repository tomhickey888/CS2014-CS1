//Hickey, Thomas    Matzen    Fall 2013    Exercise 9A
//Overview:  Gets a number from the user and then calculates the sum of all integers from 1 to that number
//Compiler Used:  G++ with TextPad editor
//Status:  Compiles and meets the requirements
//Help:  No help

#include <iostream>
using namespace std;

int main()
{
	int choice, cntr, acc;

	cntr = 1;
	acc = 0;

cout << "Please enter a positive integer: ";
	cin >> choice;
cout << endl;

while(cntr <= choice)
{
	acc = cntr + acc;
	cntr++;
}

cout << "The sum of the numbers between 1 and " << choice << " is " << acc << ".\n" << endl << endl;

}
