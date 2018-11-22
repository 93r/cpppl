#include <cstddef>
#include <iostream>
#include <fstream>

void use_pointer(std::ostream& os, const char* c, std::size_t sz)
{
	//for (const char* end = c + sz; c < end; ++c) {
	for (std::size_t i = 0; i < sz; ++i) {
		os << *(c + i);
	}
}

void use_index(std::ostream& os, const char* c, std::size_t sz)
{
	for (std::size_t i = 0; i < sz; ++i) {
		os << c[i];
	}
}

int main()
{
	char str[] = "hello\n";
	//char str[] = {'h', 'e', 'l', 'l', 'o', '\n'};
	std::size_t sz = sizeof str;
	std::ofstream dbg_out {"dbg.out", std::ios_base::binary};

	use_pointer(std::cout, str, sz);
	use_pointer(dbg_out, str, sz);
	use_index(std::cout, str, sz);
	use_index(dbg_out, str, sz);
	std::cout << "DONE\n";
	dbg_out << "DONE\n";
}

