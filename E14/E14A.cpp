//Hickey, Thomas    Matzen    Fall 2013    Exercise 14A
//Overview:  Gets three numbers from the user, calls a function to determine which is largest, and then outputs
//           the results.
//Compiler Used:  G++ with TextPad editor
//Status:  Compiles and meets the requirements
//Help:  None

#include <iostream>
using namespace std;

void largest(int, int, int, int&);

int main()
  {
	  int num1, num2, num3, large;

  cout << "Please enter 3 integers seperated by spaces: ";
	  cin >> num1 >> num2 >> num3;

  largest(num1, num2, num3, large);

  cout << "The largest number is " << large << "." << endl << endl;
  }

void largest(int num1, int num2, int num3, int &large)
  {
	if(num1 >= num2 && num1 >= num3)
	    large = num1;

	else if(num2 >= num1 && num2 >= num3)
	    large = num2;

	else if(num3 >= num1 && num3 >= num2)
	    large = num3;
  }


