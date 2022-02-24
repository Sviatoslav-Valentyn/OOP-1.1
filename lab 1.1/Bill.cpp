#include "Bill.h"

double Bill::cost()
{
	return first * second;
}
void Bill::read()
{
	int x;
	double y;
	do
	{
		cout << " Minutes = "; cin >> x;
		cout << " UAH per minute = "; cin >> y;
	} while (!init(x, y));
}
void Bill::display()
{
	cout << endl;
	cout << "Minutes = " << get_first() << endl;
	cout << "UAH per minute = " << get_second() << endl;
}
bool Bill::init(int first, double second)
{
	if (first > 0 && second > 0) 
	{
		set_first(first);
		set_second(second);
		return true;
	}
	else
		return false;
}