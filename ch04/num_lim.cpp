#include <iostream>
#include <limits>

int main()
{
	std::cout << "char - min: " << int(std::numeric_limits<char>::min()) << "\tmax: " << int(std::numeric_limits<char>::max()) << "\n"; // int() conversion needed, otherwise characters will be put out
	std::cout << "short - min: " << std::numeric_limits<short>::min() << "\tmax: " << std::numeric_limits<short>::max() << "\n";
	std::cout << "unsigned short - min: " << std::numeric_limits<unsigned short>::min() << "\tmax: " << std::numeric_limits<unsigned short>::max() << "\n";
	std::cout << "int - min: " << std::numeric_limits<int>::min() << "\tmax: " << std::numeric_limits<int>::max() << "\n";
	std::cout << "unsigned - min: " << std::numeric_limits<unsigned>::min() << "\tmax: " << std::numeric_limits<unsigned>::max() << "\n";
	std::cout << "long - min: " << std::numeric_limits<long>::min() << "\tmax: " << std::numeric_limits<long>::max() << "\n";
	std::cout << "unsigned long - min: " << std::numeric_limits<unsigned long>::min() << "\tmax: " << std::numeric_limits<unsigned long>::max() << "\n";
	std::cout << "long long - min: " << std::numeric_limits<long long>::min() << "\tmax: " << std::numeric_limits<long long>::max() << "\n";
	std::cout << "unsigned long long - min: " << std::numeric_limits<unsigned long long>::min() << "\tmax: " << std::numeric_limits<unsigned long long>::max() << "\n";
	std::cout << "float - min: " << std::numeric_limits<float>::min() << "\tmax: " << std::numeric_limits<float>::max() << "\n";
	std::cout << "double - min: " << std::numeric_limits<double>::min() << "\tmax: " << std::numeric_limits<double>::max() << "\n";
	std::cout << "long double - min: " << std::numeric_limits<long double>::min() << "\tmax: " << std::numeric_limits<long double>::max() << "\n";
}

