//Hickey, Thomas    Matzen    Fall 2013    Exercise 11 B
//Overview: Gets a file name from the user and reads from the file the number of numbers
//			to be averaged and the numbers themselves, then displays the average. Stores
//          the numbers in an array and then displays them in reverse order.
//Compiler Used:  G++ with TextPad editor
//Status:  Compiles and meets the requirements
//Help:  Jackie -- Help with runtime error/max array values

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
const int MAX=10;
int i, N, num;
int array[MAX];
float total=0;
string fname;

ifstream inFile;

cout << "Please enter the name of the input file: ";
	cin >> fname;

inFile.open(fname.c_str());

if(!inFile)
  {
	cout << endl << "Cannot find and open input file " << fname << "." << endl << endl;
    exit(0);
  }

inFile >> N;

while(N > 10 || N <= 0)
{
	cout << endl << "Data Error. Cannot process a file with " << N << " numbers in it. " << endl << endl;
	exit(0);
}

for(int i=0; i < N; i++)
{
	inFile >> num;
	array[i] = num;
	total+=num;
}

cout << endl << "The average of your " << N << " numbers is " << total/N << "." << endl;
cout << endl << "The numbers in reverse order are: " << endl;

for (int j= N - 1; j>=0; j--)
	cout << array[j] << ", ";

cout << endl << endl;
}

