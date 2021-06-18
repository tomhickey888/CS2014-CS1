//Hickey, Thomas    Matzen    Fall 2013    Exercise 14B
//Overview:  Creates a square 2D array of '*' characters and then outputs a square of a size
//			 chosen by the user
//Compiler Used:  G++ with TextPad editor
//Status:  Compiles and meets the requirements
//Help:  None

#include <iostream>
using namespace std;

int main()
  {
	  const int MAX_SIZE=20;
	  char array[MAX_SIZE][MAX_SIZE];
	  int gridSize;

	  for(int i=0; i<MAX_SIZE; i++)
	  	  for(int j=0; j<MAX_SIZE; j++)
	  	  	  array[i][j]='*';

  	  cout << "Please the size of the grid you want to use (1-" << MAX_SIZE << "): ";
		  cin >> gridSize;

	  while(gridSize>MAX_SIZE || gridSize<=0)
	  {
	  	  cout << "Invalid size. Please enter a number between 1 & " << MAX_SIZE << ": ";
	  		  cin >> gridSize;
	  }

	  for(int i=0; i<gridSize; i++)
	  {
	  	  for(int j=0; j<gridSize; j++)
	  	  	  cout << array[i][j] << " ";

	  	  cout << endl;
	  }

	  cout << endl << endl;
  }

