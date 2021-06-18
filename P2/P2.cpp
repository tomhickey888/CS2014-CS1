//Hickey, Thomas  Matzen    Fall 2013    Program P2
//Overview:  An interactive program to calculate the cost of a number of items
//Compiler Used:  G++ with TextPad editor
//Status:  Compiles and meets the requirements
//Help:  No help

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

//Define variables
	float tax, cost, tender, preTax, postTax;
	int number;
	string item;

//Get input from the user on the items purchased
cout << "Please enter the tax rate: ";
	cin >> tax;
cout << endl;
cout << "Please enter the item name: ";
	cin >> item;
cout << "Please enter the number of items purchased: ";
	cin >> number;
cout << "Please enter the cost per item: $";
	cin >> cost;
cout << endl << endl;

//Calculate and display the cost of the items and the tax
	tax = tax/100;
	preTax = cost * number;
	postTax = (preTax*tax) + preTax;

cout << fixed << showpoint << setprecision(2) << number << " " << item << " @ $" << cost << " is $" << preTax << endl
	 << "Sales tax is $" << preTax*tax << endl << "Total sale is $" << postTax << endl << endl;

//Get input from the user on the amount tendered and calculate and display change
cout << "Amount tendered: $";
	cin >> tender;
cout << endl << "Change is: $" << tender - postTax << endl << endl;

}
