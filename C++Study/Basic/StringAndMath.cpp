#include <iostream>
#include <string>
using namespace std;

void StringAndMath(void)
{
	string firstName = "Web";
	string lastName = "Site";
	string fullName = firstName + " " + lastName;
	cout << fullName << '\n';
	string fullNameAppend = firstName.append(lastName);
	cout << fullName << '\n';
}