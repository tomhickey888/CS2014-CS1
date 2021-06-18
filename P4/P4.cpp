//Hickey, Thomas    Matzen    Fall 2013    Program 4
//Overview:  Gets three numbers from the user and then ouputs them from smallest to largest
//Compiler Used:  G++ with TextPad editor
//Status:  Compiles and meets the requirements
//Help:  No help

#include <iostream>
using namespace std;
int main()
{
	int num1, num2, num3;

cout << "Please enter the first number (an integer): ";
	cin >> num1;
cout << "Please enter the second number (an integer): ";
	cin >> num2;
cout << "Please enter the second number (an integer): ";
	cin >> num3;
cout << endl;

if(num1>num2 && num2<num3 && num1<num3)
	cout << "Numbers in order from smallest to largest are: " << num2 << " " << num1 << " " << num3 << endl;

else if(num1<num2 && num2>num3 && num1>num3)
	cout << "Numbers in order from smallest to largest are: " << num3 << " " << num1 << " " << num2 << endl;

else if(num1>num2 && num2<num3 && num1>num3)
	cout << "Numbers in order from smallest to largest are: " << num2 << " " << num3 << " " << num1 << endl;

else if(num1>num2 && num2>num3 && num1>num3)
	cout << "Numbers in order from smallest to largest are: " << num3 << " " << num2 << " " << num1 << endl;

else if(num1<num2 && num2<num3 && num1<num3)
	cout << "Numbers in order from smallest to largest are: " << num1 << " " << num2 << " " << num3 << endl;

else if(num1<num2 && num2>num3 && num1<num3)
	cout << "Numbers in order from smallest to largest are: " << num1 << " " << num3 << " " << num2 << endl;

else if(num1==num2 && num3>num2)
	cout << "Numbers in order from smallest to largest are: " << num1 << " " << num2 << " " << num3 << endl;

else if(num2==num3 && num1>num2)
	cout << "Numbers in order from smallest to largest are: " << num3 << " " << num2 << " " << num1 << endl;

else if(num1==num3 && num1<num2)
	cout << "Numbers in order from smallest to largest are: " << num3 << " " << num1 << " " << num2 << endl;

else
	cout << "Numbers in order from smallest to largest are: " << num1 << " " << num2 << " " << num3 << endl;

cout << endl << endl;
}
