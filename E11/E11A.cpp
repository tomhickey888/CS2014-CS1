//Hickey, Thomas    Matzen    Fall 2013    Exercise 11 A
//Overview: Asks the user for the number of numbers to be averaged and the numbers
//			themselves, then displays the average. Stores the numbers in an array
//          and then displays them in reverse order.
//Compiler Used:  G++ with TextPad editor
//Status:  Compiles and meets the requirements
//Help:  No help

#include <iostream>
using namespace std;
int main()
{
const int MAX=10;
int i, N, num, total=0;
int array[MAX];

cout << "Please enter how many numbers you want to average (1-10): ";
	cin >> N;

while(N > 10 || N <= 0)
{
	cout << "Invalid entry. Please enter a number between 1 and 10: ";
		cin >> N;
}

for(int i=1; i <= N; i++)
{
	cout << "Please enter number " << i << ": ";
		cin >> num;
		array[i] = num;
	total+=num;
}

cout << endl << "The average of your " << N << " numbers is " << total/N << "." << endl;
cout << endl << "The numbers in reverse order are: " << endl;

for (int j=N; j>0; j--)
	cout << array[j] << ", ";

cout << endl << endl;
}
