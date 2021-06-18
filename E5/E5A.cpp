//Hickey, Thomas    Matzen    Fall 2013    Exercise 5A
//Overview:  Allows a user to input the length and width of a rectangle and then outputs the perimeter and area
//Compiler Used:  G++ with TextPad editor
//Status:  Compiles and meets the requirements
//Help:  No help

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float length;
	float width;
	float perimeter;

cout << "Please enter the length of the building: ";
	cin >> length;
cout << "Please enter the width of the building: ";
	cin >> width;
cout << endl;

	perimeter = (length * 2) + (width * 2);

cout << fixed << showpoint << setprecision(1) << left << setw(12) << "Perimeter:" << setw(12) << "Area:" << endl
	 << setw(12) << perimeter << setw(12) << length * width << endl << endl;

}
