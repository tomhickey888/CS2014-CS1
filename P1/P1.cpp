//Hickey, Thomas  Matzen    Fall 2013    Program P1
//Overview:  An interactive program to create and output a brief story
//Compiler Used:  G++ with TextPad editor
//Status:  Compiles and meets the requirements
//Help:  No help

#include <iostream>
using namespace std;
int main()
{

//Define variables
	string name, town, city, travelHazard, feeling;
	int year, age, numYears;

//Get story values from the user
cout << "Please enter a name: ";
	cin >> name;
cout << "Please enter a one word town name: ";
	cin >> town;
cout << "Please enter a year (in 4 digit whole year format): ";
	cin >> year;
cout << "Please enter an age (in whole years): ";
	cin >> age;
cout << "Please enter a one word city name: ";
	cin >> city;
cout << "Please enter a dangerous group of people (or type of person): ";
	cin >> travelHazard;
cout << "Please enter a duration of time (in whole years): ";
	cin >> numYears;
cout << "Please enter a feeling (or mood): ";
	cin >> feeling;
cout << endl << endl;

//Output the story with the user-supplied values
cout << "There once was a person named " << name << " who lived in the town of " << town << "." << endl << endl

	 << "One brisk autumn day in " << year << ", when " << name << " was " << age << " years old, a restless"
	 << " urge to wander settled apon them and it became apparant that a good old-fashioned quest was"
	 << " in order." << endl << endl << "To this end, " << name << " set off on an epic journey to the legendary city of " << city << "."
	 << " There were many trials for " << name << " to overcome, such as the horrible (but humorous) encounter with the "
	 << travelHazard << ", but finally the city of " << city << " was in sight after a grueling journey that lasted "
	 << numYears << " years." << endl << endl << "Oddly, despite all the time and effort invested in the journey, " << name << "'s innermost"
	 << " feelings could only be described as " << feeling << ".  It was apparant to everyone involved that it would only"
	 << " be a matter of time before " << name << " would experience the wanderlust once more..." << endl << endl

	 << "The End(?)" << endl << endl;

}
