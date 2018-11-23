#include <iostream>

std::size_t strlen(const char* str)
{
	std::size_t l = 0;

	while (*str++) ++l;
	return l;
}

char* cat(const char* lhs, const char* rhs)
{
	char* buf = new char[strlen(lhs) + strlen(rhs) + 1];
	char* p = buf;

	while (*lhs) *p++ = *lhs++;
	while (*rhs) *p++ = *rhs++;
	return buf;
}

int main()
{
	const char* p1 = "hello";
	const char* p2 = " world";
	const char* p3 = cat(p1, p2);

	std::cout << strlen(p3) << " -> " << p3 << "\n";
	delete p3;
}

