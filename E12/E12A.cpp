//Hickey, Thomas    Matzen    Fall 2013    Exercise 12 A
//Overview: Asks the user for two numbers and then displays the first number raised
//			to the power of the second.
//Compiler Used:  G++ with TextPad editor
//Status:  Compiles and meets the requirements
//Help:  No help

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int n1, n2;

cout << "Please enter a number: ";
	cin >> n1;
cout << "Please enter another number: ";
	cin >> n2;

cout << n1 << " to the power of " << n2 << " is " << pow(n1, n2) << "." << endl << endl;
}
