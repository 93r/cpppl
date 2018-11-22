#include <iostream>
#include <sstream>

struct Date {
	int day_, month_, year_;
	/*
	Date(int day = 0, int month = 0, int year = 0)
		: day_(day), month_(month), year_(year)
	{ }
	*/
	friend std::istream& operator>>(std::istream&, Date&);
	friend std::ostream& operator<<(std::ostream&, Date&);
};

std::istream& operator>>(std::istream& is, Date& d)
{
	is >> d.day_ >> d.month_ >> d.year_;
	return is;
}

std::ostream& operator<<(std::ostream& os, Date& d)
{
	os << d.day_ << ' ' << d.month_ << ' ' << d.year_;
	return os;
}

int main()
{
	Date d;
	std::istringstream in {"15 11 2018"};

	std::cout << d << "\n";
	in >> d;
	std::cout << d << "\n";
}

