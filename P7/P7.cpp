//Hickey, Thomas    Matzen    Fall 2013    Program 7
//Overview: Repeatedly displays a menu, gets the user's choice via a call by value function,
//			takes action on the choice via a call by value function, and continues until the
//			user chooses to quit.
//Compiler Used:  G++ with TextPad editor
//Status:  Compiles and meets the requirements
//Help:  No help

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
int getNumber(int, int);
void count(int);
void drawSquare(int);
int factorial(int);

int main()
{
  // Declare named constants
  const int COUNT = 1;
  const int SQUARE = 2;
  const int FACTORIAL = 3;
  const int EXIT = 4;
  const int MIN_CNT = 1;
  const int MAX_CNT = 100;
  const int MIN_SQ_SIZE = 1;
  const int MAX_SQ_SIZE = 10;
  const int MIN_FACT = 1;
  const int MAX_FACT = 15;

  int choice;

  do
  {
  // Display main menu
      cout << endl << "1. Count    2. Square   3. Factorial  4. Exit" << endl
           << "Select from the above menu." << endl << endl;

      choice = getNumber(1, 4);

   switch (choice)
   	   {
  // Count Choice
       case COUNT:
       {
		   cout << endl << "Enter a number to count to." << endl;

		   int cnt = getNumber(MIN_CNT, MAX_CNT);

		   cout << endl;

		   count(cnt);
   	   }
       break;


  // Square Choice
       case SQUARE:
       {
		   cout << endl << "Enter the size of the square." << endl;

		   int sq_sze = getNumber(MIN_SQ_SIZE, MAX_SQ_SIZE);

		   drawSquare(sq_sze);
	   }
       break;


  //Factorial Choice
       case FACTORIAL:
       {
		   int N, fact;

		   cout << endl << "Calculate N factorial." << endl;

		   N = getNumber(MIN_FACT, MAX_FACT);

		   fact = factorial(N);

		   cout << endl << N << " factorial = " << fact << "." << endl;
	   }
       break;

  // Exit Function

       case EXIT: cout << endl << "Goodbye!" << endl << endl;

       break;
   }
  }
  while (choice != EXIT);
}

//Function to get user's integer input
int getNumber(int min, int max)
{
	int choiceNum;

	do
	{
		cout << "Enter a number between " << min << " and " << max << ": ";
			cin >> choiceNum;

		if(choiceNum <= max && choiceNum >= min)
			return choiceNum;

		else
			cout << "Invalid entry." << endl;
	}
	while(choiceNum < min || choiceNum > max);
}

//Function to count
void count(int cnt)
{
	const int NUM_PER_LINE = 10;
	int k=1;

	for(int i=1; i<=((cnt/NUM_PER_LINE)+1); i++)
	{
		for(int j=1; j<=NUM_PER_LINE && k<=cnt; j++)
		{
			cout << setw(6) << k;
		    k++;
		}

		cout << endl;
	}
}

//Function to draw a Square
void drawSquare(int sq_sze)
{
	for(int l=1; l<=sq_sze; l++)
	{
		for(int m=1; m<=sq_sze; m++)
			cout << "*";

		cout << endl;
	}
}

//Function to calculate N factorial
int factorial(int fact)
{
	int fact_total=1;

	for(int n=1; n<=fact; n++)
		fact_total *= n;

	return fact_total;
}

