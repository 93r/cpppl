#include <iostream>

std::size_t strlen(const char* str)
{
	//const char* save = str;
	std::size_t l = 0;

	while (*str++) ++l;
	//return str - save;
	return l;
}

char* strcpy(char* dst, const char* src)
{
	while (*dst++ = *src++);
	return dst;
}

int strcmp(const char* lhs, const char* rhs)
{
	for (; *lhs == *rhs; ++lhs, ++rhs)
		if (*lhs == '\0')
			return 0;
	return *lhs - *rhs;
}

int main()
{
	const char str[] = "hello";
	char str1[sizeof str];

	strcpy(str1, str);
	std::cout << strlen(str) << "--" << str << "--\n";
	std::cout << strlen(str1) << "--" << str1 << "--\n";
	std::cout << strcmp(str1, str) << "\n";
}

