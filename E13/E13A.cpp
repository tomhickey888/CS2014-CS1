//Hickey, Thomas    Matzen    Fall 2013    Exercise 13A
//Overview:  Gets three numbers from the user, calls a function to determine which is largest, and then outputs
//           the results.
//Compiler Used:  G++ with TextPad editor
//Status:  Compiles and meets the requirements
//Help:  Roy helped me figure out how to determine what the maximum length of a line should be.

#include <iostream>
using namespace std;

int largest(int, int, int);

int main()
  {
	  int num1, num2, num3;

  cout << "Please enter 3 integers seperated by spaces: ";
	  cin >> num1 >> num2 >> num3;

  cout << "The largest number is " << largest(num1, num2, num3) << "." << endl << endl;
  }

int largest(int num1, int num2, int num3)
  {
	int largest;

	if(num1 >= num2 && num1 >= num3)
	    largest = num1;

	else if(num2 >= num1 && num2 >= num3)
	    largest = num2;

	else if(num3 >= num1 && num3 >= num2)
	    largest = num3;

	return largest;
  }


