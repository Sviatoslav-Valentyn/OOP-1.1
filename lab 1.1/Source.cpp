#include "Bill.h"
#include <iostream>
using namespace std;
Bill makecost(int x, double y)
{
	Bill k;
	if (!k.init(x, y))
		cout << "Wrong arguments to Init!" << endl;
	return k;
}
int main()
{
	Bill z;
	z.read();
	z.display();
	cout << "Total cost: " << z.cost() << endl;
	int x;
	double y;
	cout << " Minutes = "; cin >> x;
	cout << " UAH per minute = "; cin >> y;
	Bill k = makecost(x, y);
	k.display();
	double result = k.cost();
	cout << "Total cost: " << result << endl;
	cin.get();
	return 0;
}