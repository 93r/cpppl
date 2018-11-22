#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v {1, 2, 2, 2, 3, 5, 11, 5, 7, 5, 2};

	for (auto i : v) std::cout << i << "\n";

	auto rm_end = v.end();
	for (auto i : {2, 5}) {
		rm_end = std::remove(v.begin(), rm_end, i);
	}
	v.erase(rm_end, v.end());
	std::cout << "---\n";
	for (auto i : v) std::cout << i << "\n";
}

