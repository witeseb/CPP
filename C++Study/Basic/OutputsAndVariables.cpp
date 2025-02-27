#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

void OutputAndVariables(void)
{
	char a, b, c;		// 1 byte : -128 - 127
	short int si;		// 2 bytes: -32768 - 32767
	int i;				// 4 bytes: -2147483648 - 2147483647 
	unsigned int ui;	// 4 bytes: 0 - 4294967295
	float f;			// 4 bytes: 7  digits precision
	double d;			// 8 bytes, 15 digits precision
	string string_var;
	bool bool_var;		// 1 byte: T/F

	cout << "Hello World!\n";
	cout << "Have a good day!" << '\n';
	cout << 3 << '\n';
	cout << 3 + 5 << '\n';
	cout << 5 * 2 << '\n';

	c = 'A';			// need to use '' not ""
	si = 32768;
	i = 2147483648;
	ui = 4294967296;
	f = 5.12345678987;
	d = 5.1234567898765436;
	string_var = "C++!";
	bool_var = true;

	cout << c << '\n';
	cout << si << '\n';	// Display -32768 because it's more than the maximum value of short int
	cout << i << '\n';
	cout << ui << '\n';

	cout << setprecision(17);
	cout << f << '\n';	// Too much to hold ! Weird output displayed !
	cout << d << '\n';  // Too much to hold ! Weird output displayed !

	cout << string_var << '\n';
	cout << bool_var << '\n';

	int sum;

	sum = si + i;

	cout << sum << "\n\n";

	int width = 10;
	int length = 20;
	int area;

	area = width * length;

	cout << "Width : " << width << '\n';
	cout << "Length: " << length << '\n';
	cout << "Area  : " << area << '\n';

	float f1 = 35e3;	// Scientific notation is okay to use
	double d1 = 12E4;

	cout << f1 << '\n';
	cout << d1 << '\n';

	// ASCII reference

	a = 65;
	b = 66;
	c = 67; 

	cout << a;
	cout << b;
	cout << c << "\n\n";
}