#include <iostream>
using namespace std;

void InputAndOperators(void)
{
	int x;
	int y;
	int sum;

	cout << "Please enter a number: ";
	cin >> x;
	cout << "Please enter another number: ";
	cin >> y;

	sum = x + y;

	cout << "The sum of both number is: " << sum;
}