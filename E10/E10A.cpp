//Hickey, Thomas    Matzen    Fall 2013    Exercise 10 A
//Overview: Asks the user for the number of numbers to be averaged and the numbers
//			themselves, then displays the average.
//Compiler Used:  G++ with TextPad editor
//Status:  Compiles and meets the requirements
//Help:  No help

#include <iostream>
using namespace std;
int main()
{
int i, N, num, total=0;

cout << "Please enter how many numbers you want to average: ";
	cin >> N;

if(N==0)
	cout << "There are no numbers to average." << endl << endl;
else
{
	for(int i=1; i <= N; i++)
	{
		cout << "Please enter number " << i << ": ";
			cin >> num;
		total+=num;
	}

	cout << "The average of your " << N << " numbers is " << total/N << "." << endl << endl;
}

}
