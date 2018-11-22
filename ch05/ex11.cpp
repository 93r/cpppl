#include <iostream>
#include <map>
#include <vector>
#include <string>

int main()
{
	std::vector<std::string> words;
	std::map<std::string, std::size_t> words_cnt;

	{ // for restricting scope of std::string line
		std::string line;
		while (std::cin >> line) {
			if (line == "Quit") break;

			++words_cnt[line];

			if (!( words_cnt[line] > 1 ))
				words.push_back(line);
		}
	}

	for (auto& i : words)
		std::cout << "---" << i << "---\n";

	std::cout << "Sorted output (no duplicates):\n";
	for (auto& i : words_cnt)
		std::cout << "---" << i.first << "---\n";
}

