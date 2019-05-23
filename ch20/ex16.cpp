#include <iostream>
#include <algorithm>
#include <string>

std::string itos(int num)
{
	// better use std::stringstream for this
	bool is_negative = (num < 0);
	std::string ret;

	if (is_negative)
		num = -num;

	while (true) {
		ret.push_back((num%10) + '0');
		num /= 10;
		if (num == 0) break;
	}

	if (is_negative)
		ret.push_back('-');

	std::reverse(ret.begin(), ret.end());
	return ret;
}

int main()
{
	std::cout << itos(-23330) << '\n';
}

