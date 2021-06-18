//Hickey, Thomas    Matzen    Fall 2013    Program 6
//Overview: Gets a file name from the user and inputs the data from the file into three
//			arrays.  Allows the user to search the arrays for a specific employee and
//          then calculates and displays that employee's weekly paycheck.  Also allows
//          the user to output all employees paycheck and total payroll.
//Compiler Used:  G++ with TextPad editor
//Status:  Compiles and meets the requirements
//Help:  Roy helped me to determine the right way to declare variables for file data input

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
  const int MAX_EMPLOYEES=20;
  int id[MAX_EMPLOYEES];
  float payRate[MAX_EMPLOYEES];
  float hrsWrkd[MAX_EMPLOYEES];
  int N, id1, hrsWrkd1, otHours, idFlag, idSearch=0;
  float payRate1, otPay, check, payroll;
  string fname;

  ifstream inFile;

  //Get input file name from user
  cout << "Please enter the name of the input file: ";
  	cin >> fname;

  inFile.open(fname.c_str());

  if(!inFile)
  {
    cout << endl << "Cannot find and open input file " << fname << "." << endl << endl;
    exit(0);
  }

  inFile >> N;

  while(N > MAX_EMPLOYEES || N <= 0)
  {
  	cout << endl << "Data Error. Cannot process a file with " << N << " numbers in it." << endl << endl;
	exit(0);
  }

  //Read file and input data into arrays
  for(int i = 0; i < N; i++)
  {
	inFile >> id1 >> payRate1 >> hrsWrkd1;
		id[i] = id1;
		payRate[i] = payRate1;
		hrsWrkd[i] = hrsWrkd1;
  }

  //Display arrays in table form
  cout << endl << "Employees are: " << endl;

  for (int i = 0; i < N; i++)
	cout << left << setw(8) << id[i] << setw(8) << fixed << showpoint << setprecision(2) << payRate[i]
		 << setw(8) << setprecision(0) << noshowpoint << hrsWrkd[i] << endl;

  cout << endl << "To calculate a single employee paycheck, enter employee ID" << endl
       << "Or use 1 to calculate Weekly Payroll or -1 to quit" << endl;

  //Employee ID search loop
  do
  {
	  cout  << "Enter Employee ID (-1 to Quit): ";
	     cin >> idSearch;

  if(idSearch >= 1000 && idSearch <= 9999)
  {
	  idFlag = 0;

	  for(int i = 0; i < N; i++)
	  {
		  if(idSearch == id[i])
		  {
			  id1 = id[i];
			  hrsWrkd1 = hrsWrkd[i];
			  payRate1 = payRate[i];

		  	  //Paycheck calculation
		  	  if(hrsWrkd1<=40)
			  	check = hrsWrkd1 * payRate1;
			  else
			  {
			  	otHours = hrsWrkd1 - 40;
			  	otPay = otHours * (payRate1 * 1.5);
			  	check = (40 * payRate1) + otPay;
			  }

		  	  //Paycheck display
		  	  cout << left << setw(10) << "ID" << setw(10) << "HOURS" << setw(10) << "RATE" << setw(10)
		  	       << "PAYCHECK" << endl << setw(10) << id1 << setw(10) << hrsWrkd1 << setprecision(2)
		  	       << fixed << setw(10) << payRate1 << setw(10) << check << endl << endl;


		  	  idFlag = 1;

		  	  break;
		  }
	  }
  }

  else if(idSearch < 0)
  {
	  cout << "Exiting the payroll system." << endl << endl << "Goodbye!" << endl << endl;
	  exit(0);
  }

  //Bonus section
  else if(idSearch == 1)
  {
	  cout << endl << "Payroll summary-----------" << endl << left << setw(10) << "ID" << setw(10)
	       << "HOURS" << setw(10) << "RATE" << setw(10) << "PAYCHECK" << endl;

	  //Weekly payroll calculation and display
	  for(int i = 0; i < N; i++)
	  	  {
	  		  id1 = id[i];
	  		  hrsWrkd1 = hrsWrkd[i];
	  		  payRate1 = payRate[i];

	  		  	  //Paycheck calculation
	  		  	  if(hrsWrkd1<=40)
	  			  {
					  check = hrsWrkd1 * payRate1;
					  payroll += check;
				  }

	  			  else
	  			  {
	  			  	otHours = hrsWrkd1 - 40;
	  			  	otPay = otHours * (payRate1 * 1.5);
	  			  	check = (40 * payRate1) + otPay;
	  			  	payroll += check;
			      }

			  //Payroll Display
			  cout << left << setw(10) << id1 << setw(10) << hrsWrkd1 << setprecision(2)
		  	       << fixed << setw(10) << payRate1 << setw(10) << check << endl;
		  }

       cout << endl << "Payroll is $" << fixed << setprecision(2) << payroll << "." << endl << endl;
  }

  else if(idSearch < 1000 || idSearch > 9999)
  	  cout << "Invalid employee ID" << endl << endl;

  else if(idFlag == 0)
	  cout << "Employee " << idSearch << " not found." << endl << endl;

  }

  while(idSearch > 0);

  cout << endl << endl;
}

