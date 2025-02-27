#include <iostream>
using namespace std;

void InputAndOperators(void)
{
	int x;
	int y;
	int sum;
	int diff;
	float product;
	float quotient;
	float f_quotient;
	int modulus;

	cout << "Please enter a number: ";
	cin >> x;
	cout << "Please enter another number: ";
	cin >> y;

	// Arithmetic operators
	sum = x + y;
	diff = x - y;
	product = x * y;
	quotient = x / y;			// Note that this returns an int. e.g. 25/3 = 8
	f_quotient = x / (float)y;	// To return quotient with decimals, we need to cast at least one of the variable type be double or float
	modulus = x % y;

	cout << "The sum of both number is: " << sum << '\n';
	cout << "The difference of both number is: " << diff << '\n';
	cout << "The product of both number is: " << product << '\n';
	cout << "The quotient of both number is: " << quotient << '\n';
	cout << "The quotient of both number is: " << f_quotient << '\n';
	cout << "The modulus of both number is: " << modulus << '\n';

	cout << '\n' << "Incrementing both numbers...\n\n";
	++x;
	++y;
	cout << "Now x = " << x << " and y = " << y << "." << '\n';

	cout << '\n' << "Decrementing both numbers...\n\n";
	--x;
	--y;
	cout << "Now x = " << x << " and y = " << y << "." << "\n\n";

	// Assignment operators

	cout << "x = " << x << '\n';

	x += 5; // This is equivilent to x = x + 5;
	cout << "x = " << x << '\n';
	x -= 3;
	cout << "x = " << x << '\n';
	x *= 7;
	cout << "x = " << x << '\n';
	x /= 2;
	cout << "x = " << x << '\n';

	// Comparison operators

	cout << (x > y) << '\n';
	cout << (x < y) << '\n';
	cout << (x == y) << '\n';
	cout << (x != y) << '\n';

	// Logical operators

	cout << (x > y && x < y) << '\n';
	cout << (x > y || x < y) << '\n';
	cout << !(x > y || x < y) << '\n';
}