//Hickey, Thomas    Matzen    Fall 2013    Exercise 5B
//Overview:  Outputs the number of bytes that G++ is using for scalar, primitive data types
//Compiler Used:  G++ with TextPad editor
//Status:  Compiles and meets the requirements
//Help:  No help

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

cout << "Number of bytes used by G++ compiler for scalar, primitive data types." << endl << endl
	 << setw(8) << "short" << setw(8) << "int" << setw(8) << "long" << setw(8) << "float"
	 << setw(8) << "double" << setw(14) << "long double" << setw(8) << "char" << setw(8) << "bool" << endl
	 << setw(8) << sizeof(short) << setw(8) << sizeof(int) << setw(8) << sizeof(long) << setw(8) << sizeof(float)
	 << setw(8) << sizeof(double) << setw(14) <<  sizeof(long double) << setw(8) << sizeof(char) << setw(8) << sizeof(bool)
	 << endl << endl;

}
