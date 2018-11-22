#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>

int main()
{
	std::istringstream in {"113420004343.11"};
	std::string a, b, c;
	double d;

	in
		>> std::setw(2) >> a
		>> std::setw(2) >> b
		>> std::setw(4) >> c
		>> d
		;
	/*
	in.width(2); in >> a;
	in.width(2); in >> b;
	in.width(4); in >> c;
	*/
	std::cout
		<< a << ' '
		<< b << ' '
		<< c << ' '
		<< d << "\n";
}

