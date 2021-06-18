//Hickey, Thomas    Matzen    Fall 2013    Exercise 13B
//Overview:  Gets a number from the user, calls a function to determine which if it is between 1 and 10 and then
//           outputs the choice if the number is and asks for another number if it is not.
//Compiler Used:  G++ with TextPad editor
//Status:  Compiles and meets the requirements
//Help:  No help

#include <iostream>
using namespace std;

bool checkNumber(int, int, int);

int main()
  {
	  int num1;
	  const int MIN = 0;
	  const int MAX = 10;

  do
  {
	  cout << "Please enter a number between 1 and 10: ";
		  cin >> num1;

	  if(checkNumber(num1, MIN, MAX) == 1)
  		  cout << "The number you entered is " << num1 << "." << endl << endl;

  	  else
  	  	  cout << "Invalid entry. Try again." << endl << endl;
  }
  while(checkNumber(num1, MIN, MAX) == 0);
  }

bool checkNumber(int num1, int MIN, int MAX)
  {
	if(num1 <= MAX && num1 >= MIN)
	    return 1;

	else
	    return 0;
  }


