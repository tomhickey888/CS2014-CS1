//Hickey, Thomas    Matzen    Fall 2013    Exercise 10 C
//Overview: Gets a file name from the user and reads from the file the number of numbers
//			to be averaged and the numbers themselves, then displays the average.
//Compiler Used:  G++ with TextPad editor
//Status:  Compiles and meets the requirements
//Help:  No help

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
int i, N, num, total=0;
string fname;

ifstream inFile;

cout << "Please enter the name of the input file: ";
	cin >> fname;

inFile.open(fname.c_str());

if(!inFile)
  {
	cout << "Cannot find and open input file " << fname << "." << endl;
    exit(0);
  }

inFile >> N;

if(N==0)
	cout << "There are no numbers to average." << endl << endl;
else
{
	for(int i=1; i <= N; i++)
	{
		inFile >> num;
		total+=num;
	}

	cout << "The average of your " << N << " numbers is " << total/N << "." << endl << endl;
}

}

