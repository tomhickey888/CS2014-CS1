//Hickey, Thomas    Matzen    Fall 2013    Exercise 12 B
//Overview: Asks the user for two numbers and then displays the first number raised
//			to the power of the second.
//Compiler Used:  G++ with TextPad editor
//Status:  Compiles and meets the requirements
//Help:  Roy helped me remember the proper order for using the string commands

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
  char s1[26];
  char s2[26];
  char s3[26];
  char s4[76];

  cout << "Please enter string 1 (max 25 characters): ";
  	cin >> s1;

  strcpy(s4, s1);

  cout << "Please enter string 2 (max 25 characters): ";
  	cin >> s2;

  strcat(s4, s2);

  cout << "Please enter string 3 (max 25 characters): ";
  	cin >> s3;

  strcat(s4, s3);

  cout << endl;

  cout << "The strings concatenated together are " << s4 << " and the length is " << strlen(s4) << ".";

  cout << endl << endl;
}
