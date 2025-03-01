#include <iostream>
using namespace std;

void ConditionsAndLoops(void)
{
	int x;
	int y;
	int day;
	int count;
	int i;
	string answer;

	int myNumbers[5] = {10, 20, 30, 40, 50};

	cout << "Input x: ";
	cin >> x;

	if (x > 66)
	{
		cout << "ABOVE AVERAGE";
	}
	else if (x > 33)
	{
		cout << "AVERAGE";
	}
	else
	{
		cout << "BELOW AVERAGE";
	}

	cout << "\nHow are you? Press 1 for good: ";
	cin >> y;
	answer = (y == 1) ? "You're good." : "You're not good.";
	cout << answer << '\n';

	cout << "\nWhat day is it? ";
	cin >> day;
	switch (day)
	{
		case (1):
			cout << "Monday";
			break;
		case (2):
			cout << "Tuesday";
			break;
		case (3):
			cout << "Wednesday";
			break;
		case (4):
			cout << "Thursday";
			break;
		case (5):
			cout << "Friday";
			break;
		case (6):
			cout << "Saturday";
			break;
		case (7):
			cout << "Sunday";
			break;
		default:
			cout << "Not the day of the week";
	}

	// Loop

	cout << "\nCount to what? ";
	cin >> count;
	i = 0;
	while (i <= count)
	{
		cout << i << '\n';
		i++;
	}

	do
	{
		cout << "Type some numbers (hint, you did): ";
		cin >> i;
	}
	while (i != count);

	for (i = 0; i <= count; i++)
	{
		cout << i << '\n';
	}

	// foreach

	for (int i : myNumbers)
	{
		cout << i << "\n";
	}

	// break (stop and jump out of the loop)

	for (int i = 0; i < 10; i++)
	{
		if (i == 4)
		{
			break;
		}
		cout << i << "\n";
	}

	// continue (skip and go on in the loop)

	for (int i = 0; i < 10; i++)
	{
		if (i == 4)
		{
			continue;
		}
		cout << i << "\n";
	}
}