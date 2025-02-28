#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void StringAndMath(void)
{
	string firstName;
	string lastName;
	string fakeSentence;
	string realSentence;

	cout << "Please enter your first name: ";
	cin >> firstName;
	cout << "Please enter your last name: ";
	cin >> lastName;

	string tempFirstName = firstName;
	string fullName = firstName + " " + lastName;

	cout << fullName << '\n';

	string fullNameAppend = tempFirstName.append(lastName);

	cout << fullNameAppend << '\n';
	cout << "The length of the name is: " << fullName.length() << '\n';	// Same results
	cout << "The length of the name is: " << fullName.size() << '\n';	// Same results

	// String Access

	cout << fullName[0] << '\n';
	cout << fullName[1] << '\n';
	cout << fullName[2] << '\n';
	cout << fullName[3] << '\n';
	cout << fullName[4] << '\n';
	cout << fullName[5] << '\n';
	cout << fullName[6] << '\n';
	cout << fullName[fullName.length() - 1] << '\n';
	fullName[0] = 'X';
	cout << fullName << '\n';

	// String Access with .at

	cout << fullName.at(0) << '\n';
	cout << fullName.at(1) << '\n';
	cout << fullName.at(2) << '\n';
	cout << fullName.at(3) << '\n';
	cout << fullName.at(4) << '\n';
	cout << fullName.at(5) << '\n';
	cout << fullName.at(6) << '\n';
	cout << fullName.at(fullName.length() - 1) << '\n';
	fullName.at(firstName.length() + 1) = 'X';
	cout << fullName << '\n';

	// Getting more than 1 words string sentence

	cout << "Type a several words: ";
	cin.ignore();	// Call cin.ignore() before using getline, because we have a leading whitespace from earlier.
	getline(cin, realSentence);
	cout << "Type the same sentence: ";
	cin >> fakeSentence;
	cout << "Real Sentence: " << realSentence << '\n';
	cout << "Fake Sentence: " << fakeSentence << '\n';

	// Basic math

	cout << max(5, 10) << '\n';
	cout << min(5, 10) << '\n';

	cout << sqrt(64) << '\n';
	cout << round(2.6) << '\n';
	cout << log(2) << '\n';
}