//Hickey, Thomas    Matzen    Fall 2013    Program 5
//Overview: Repeatedly displays a menu, gets the user's choice, takes action on the choice, and
//			continues until the user chooses to quit.
//Compiler Used:  G++ with TextPad editor
//Status:  Compiles and meets the requirements
//Help:  No help

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
// Declare variables and name constants
int choice;
const int COUNT = 1;
const int SQUARE = 2;
const int FACTORIAL = 3;
const int EXIT = 4;
const int END_CNT = 100;
const int NUM_PER_LINE = 10;
const int MAX_SQUARE_SIZE = 10;
const int FACT_MAX = 14;

do
{
// Display menu
cout << endl << "1. Count    2. Square   3. Factorial  4. Exit" << endl;

// Get user menu choice
cout << "Enter your choice (1-4): ";
	cin >> choice;

   switch (choice)
   	   {
// Count Function
       case COUNT:
       {
		   int cnt = 0;

		   cout << endl << "Counting 10 numbers per line." << endl;

		   cout << "Enter a number to count to (1-100): ";
		    	 cin >> cnt;
		   cout << endl;

		   while(cnt > END_CNT || cnt <= 0)
		   {
		       cout << "Not a good number, try again." << endl;
		       cout << "Enter a number to count to (1-100): ";
		    	 cin >> cnt;
		   }

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
       break;


// Square Function
       case SQUARE:
       {
		   int sq_sze=0;

		   cout << endl << "Enter the size of the square to draw (1-10): ";
		   		cin >> sq_sze;

		   while(sq_sze > MAX_SQUARE_SIZE || sq_sze <= 0)
		   {
		   	 cout << "Not a good number, try again." << endl;
		   	 cout << "Enter the size of the square to draw (1-10): ";
		   		 cin >> sq_sze;
		   }

			for(int l=1; l<=sq_sze; l++)
			{
				for(int m=1; m<=sq_sze; m++)
				  cout << "*";

				cout << endl;
		   }
		}
       break;


//Factorial Function
       case FACTORIAL:
       {
		   int fact=0;
		   cout << endl << "Calculate N factorial. Enter a number between 0 and 14: ";
		   		cin >> fact;
		   cout << endl;

		   while(fact > FACT_MAX || fact <= 0)
		   {
		   	 cout << "Invalid entry. Enter an integer between 1 and 14: ";
		   		 cin >> fact;
		   	 cout << endl;
		   }

		   int fact_total=1;

		   for(int n=1; n<=fact; n++)
			 fact_total *= n;

		   cout << fact << " factorial = " << fact_total << "." << endl;
	   }
       break;

// Exit Function

       case EXIT: cout << endl << "Goodbye!" << endl << endl;

       break;

//Bad User choice on Main Menu
       default:  cout << "Invalid choice. Select another option." << endl << endl;
       }
}
while (choice != EXIT);

cout << endl << endl;

}
