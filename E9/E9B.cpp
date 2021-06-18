//Hickey, Thomas    Matzen    Fall 2013    Exercise 9B
//Overview:  Gets numbers from the user and then adds them together until the user chooses to quit
//Compiler Used:  G++ with TextPad editor
//Status:  Compiles and meets the requirements
//Help:  Help with garbage output from Jackie (assignment vs initilizer)

#include <iostream>
using namespace std;

int main()
{
	char cnt;
	int num1, num2, ttl;

cout << "Please enter a positive integer: ";
	cin >> num1;

cout << "Do you want to add another number (Y/N): ";
	cin >> cnt;

	ttl = num1;

while(cnt == 'Y' || cnt == 'y')
{
	cout << "Please enter the number to add: ";
		cin >> num2;

	ttl += num2;

	cout << "The sum of the numbers so far is " << ttl << endl;

	cout << "Do you want to add another number (Y/N): ";
		cin >> cnt;
}

cout << endl << "The sum of all the numbers is " << ttl << "." << endl << endl;

}
