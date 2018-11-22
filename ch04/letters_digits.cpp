#include <iostream>

int main()
{
	std::cout << "letters:\n";
	for (char c = 'a'; c <= 'z'; ++c) {
		std::cout
			<< c
			<< "\t"
			<< int(c)
			<< "\n";
	}
        std::cout << "digits\n";
	for (char c = '0'; c <= '9'; ++c) {
		std::cout
			<< c
			<< "\t"
			<< int(c)
			<< "\n";
	}
        std::cout << "----\n";
	std::cout << "letters (hex):\n";
	for (char c = 'a'; c <= 'z'; ++c) {
		std::cout
			<< c
			<< "\t"
			<< std::hex
			<< int(c)
			<< "\n";
	}
        std::cout << "digits (hex)\n";
	for (char c = '0'; c <= '9'; ++c) {
		std::cout
			<< c
			<< "\t"
			<< std::hex
			<< int(c)
			<< "\n";
	}
}

