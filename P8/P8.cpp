//Hickey, Thomas    Matzen    Fall 2013    Program 8
//Overview: Gets a file name from the user, reads from the file the number of numbers contained
//			therein and the numbers themselves, and displays them in forward and reverse order.
//			Then allows the user to rotate the array by one position as many times as they like.
//Compiler Used:  G++ with TextPad editor
//Status:  Compiles and meets the requirements
//Help:  None

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
  const int MAX=25;
  int N, num, temp, first;
  int array[MAX];
  char repeat;
  bool rotate=1, flag;
  string fname;

  ifstream inFile;

  //Get filename from user for input data for array
  cout << "Enter the name of the input file: ";
	  cin >> fname;

  //Open file for input from the specified filename
  inFile.open(fname.c_str());

  //Defensive programming for good filename, else terminate program
  if(!inFile)
    {
 	  cout << endl << "Cannot find and open input file " << fname << "." << endl << endl;
      exit(0);
    }

  //Read first number in file as header number
  inFile >> N;

  //Defensive programming to ensure header number is more than 0 and less than max, else terminate program
  while(N>MAX || N<=0)
  {
	  cout << endl << "Data Error. Cannot process a file with " << N << " numbers in it." << endl << endl;
	  exit(0);
  }

  //Initialize array elements with input from file
  for(int i=0; i<N; i++)
  {
	  inFile >> num;
	  array[i] = num;
  }

  //Display array in reverse order
  cout << endl << "The array elements (in reverse order) are: " << endl;

  for(int i=N-1; i>=0; i--)
	  cout << array[i] << " ";

  //Display array in forward order
  cout << endl << endl << "The array elements (in forawrd order) are: " << endl;

  for(int i=0; i<N; i++)
	  cout << array[i] << " ";
  //Begin rotation loop
  while(rotate==1)
  {
	  //Preserve original first element and initialize temp variables
	  first=array[N-1];
	  temp=array[N-2];

	  //Rotate array elements
	  for(int i=N-1; i>1; i--)
	  {
		  array[i]=temp;
		  temp=array[i-2];
	  }

	  //Set first array element to original final and second array element to original first element
	  array[0]=first;
	  array[1]=temp;

	  //Display rotated array
	  cout << endl << endl << "The array elements rotated by one are: " << endl;

	  for(int i=0; i<N; i++)
	  	cout << array[i] << " ";


	  //Allow user to repeat array rotation if desired
	  do
	  {
      	  cout << endl << endl << "Do you wish to rotate again (Y/N): ";
	  	      cin >> repeat;

      	  if(repeat=='Y' || repeat=='y')
      	  {
	  	      rotate=1;
	  	      flag=0;
		  }

	  	  else if(repeat=='N' || repeat=='n')
	  	  {
	  		  rotate=0;
	  		  flag=0;
		  }

	  	  else
	  	  {
			  cout << "Invalid input.  Please enter either Y or N." << endl << endl;
			  flag=1;
		  }
	  }
	  while(flag==1);
  }

  cout << endl << endl << "Goodbye!" << endl << endl;
}

