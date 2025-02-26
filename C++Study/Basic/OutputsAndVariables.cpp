#include <iomanip>
#include <iostream>
using namespace std;

void OutputAndVariables(void)
{
	char c;				// 1 byte : -128 - 127
	short int si;		// 2 bytes: -32768 - 32767
	int i;				// 4 bytes: -2147483648 - 2147483647 
	unsigned int ui;	// 4 bytes: 0 - 4294967295
	float f;			// 4 bytes: 7  digits precision
	double d;			// 8 bytes, 15 digits precision
	string string_var;
	bool bool_var;		// 1 byte: T/F

	int sum;

	const int minutesPerHour = 60; // need to be assigned in-line
	const float PI = 3.14159;

	int width = 10;
	int length = 20;
	int area;

	area = width * length;

	c = 'A';			// need to use '' not ""
	si = 32768;
	i = 2147483648;
	ui = 4294967296;
	f = 5.12345678987;
	d = 5.1234567898765436;
	string_var = "C++!";
	bool_var = true;

	sum = si + i;

	cout << "Hello World!\n";
	cout << "Have a good day!" << endl;
	cout << 3 << endl;
	cout << 3 + 5 << endl;
	cout << 5 * 2 << "\n";
	cout << si << endl;	// Display -32768 because it's more than the maximum value of short int
	cout << i << endl;
	cout << ui << endl;

	cout << setprecision(17);
	cout << f << endl;	// Too much to hold ! Weird output displayed !
	cout << d << endl;  // Too much to hold ! Weird output displayed !

	cout << string_var << endl;
	cout << bool_var << endl;

	cout << sum << "\n\n";

	cout << "Width : " << width << endl;
	cout << "Length: " << length << endl;
	cout << "Area  : " << area << endl;
}