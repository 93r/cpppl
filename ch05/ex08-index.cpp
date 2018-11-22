#include <cstddef>
#include <iostream>

void use_index(const char* c, std::size_t sz)
{
	for (std::size_t i = 0; i < sz; ++i) {
		std::cout << c[i];
	}
}

int main()
{
	char str[] = {'h', 'e', 'l', 'l', 'o', '\n'};
	std::size_t sz = sizeof str;

	use_index(str, sz);
}

