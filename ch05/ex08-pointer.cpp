#include <cstddef>
#include <iostream>

void use_pointer(const char* c, std::size_t sz)
{
	for (const char* end = c + sz; c < end; ++c) {
		std::cout << *c;
	}
}

int main()
{
	char str[] = {'h', 'e', 'l', 'l', 'o', '\n'};
	std::size_t sz = sizeof str;

	use_pointer(str, sz);
}

