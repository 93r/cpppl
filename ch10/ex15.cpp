#include <iostream>

class Output {
	public:
		Output() { std::cout << "Initialize\n"; }
		~Output() { std::cout << "Clean up\n"; }
};

Output ex15;

int main()
{
	std::cout << "Hello world!\n";
}

