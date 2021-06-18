//Hickey, Thomas  Matzen    Fall 2013    Exercise 3C
//Overview:  Allows a user to input three numbers and then outputs them in each possible ordering
//Compiler Used:  G++ with TextPad editor
//Status:  Compiles and meets the requirements
//Help:  No help

#include <iostream>
using namespace std;
int main()
{
	int A;
	int B;
	int C;

cout << "Please enter number 1: ";
cin >> A;
cout << "Please enter number 2: ";
cin >> B;
cout << "Please enter number 3: ";
cin >> C;

cout << endl << "The numbers are: " << A << ", " << B << ", and " << C << ".";
cout << endl << "The numbers are: " << A << ", " << C << ", and " << B << ".";
cout << endl << "The numbers are: " << B << ", " << C << ", and " << A << ".";
cout << endl << "The numbers are: " << B << ", " << A << ", and " << C << ".";
cout << endl << "The numbers are: " << C << ", " << A << ", and " << B << ".";
cout << endl << "The numbers are: " << C << ", " << B << ", and " << A << "." << endl;

}
