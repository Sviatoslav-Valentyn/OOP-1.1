#pragma once
#include <iostream>
using namespace std;
class Bill
{
	private:
		int first;
		double second;
	public:
		double cost();
		bool init(int first, double second);
		void read();
		void display();
		int get_first() { return first; };
		double get_second() { return second; };
		void set_first(int value) { first = value; };
		void set_second(double value) { second = value; };
};