#include <iostream>
#include <cstring>

int main()
{
	char str[] = "a short string";

	std::cout << "size of str[]: " << sizeof(str) << "\n";
	std::cout << "length of str[]: " << std::strlen(str) << "\n";
}
