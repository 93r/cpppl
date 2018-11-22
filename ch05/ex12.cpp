#include <iostream>
#include <string>
#include <cstring>

int main()
{
	const char str[] = "xabaacbaxabb";
	const char sstr[] = "ab";

	{
		std::string s = str;
		std::size_t cnt = 0;

		for (std::size_t pos = 0;
				(pos = s.find(sstr, pos)) != std::string::npos;
				++pos) {
			std::cout << "found: '" << sstr << "' at " << pos << "\n";

			++cnt;
		}

		std::cout << cnt << "\n";
	}

	{
		const char* pos = str;
		std::size_t cnt = 0;

		while ((pos = std::strstr(pos, sstr)) != nullptr) {
			std::cout << "found: '" << sstr << "' at " << (pos - str) << "\n";
			++cnt;
			++pos;
		}

		std::cout << cnt << "\n";
	}
}

