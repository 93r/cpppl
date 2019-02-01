// includes handling of excersize 12
#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <numeric>
#include <algorithm>

template<typename T>
T median(const std::vector<T>& v)
{
	T mdn {};

	if (v.size() % 2 == 0) {
		mdn = (
				*( v.begin() + v.size()/2 )
				+ *( v.begin() + v.size()/2 - 1)
		      )/2;
	}
	else {
		mdn = *( v.begin() + v.size()/2 );
	}

	return mdn;
}

int main()
{
	std::ifstream in {"ex03.dat"};
	std::string name;
	double value;
	std::map<std::string, std::vector<decltype(value)>> m;

	while (in >> name >> value) {
		m[name].push_back(value);
	}

	std::vector<decltype(value)> totals;
	for (auto& [k, v] : m) {
		decltype(value) sum = std::accumulate(v.begin(), v.end(), decltype(value){});
		decltype(value) avg = sum/v.size();
		decltype(value) mdn = {};

		std::sort(v.begin(), v.end());
		mdn = median(v);
		totals.insert(totals.end(), v.begin(), v.end());

		std::cout
			<< k
			<< " sum: " << sum
			<< " avg: " << avg
			<< " median: " << mdn
			<< "\n";
	}

	auto& v = totals;
	decltype(value) sum = std::accumulate(v.begin(), v.end(), decltype(value){});
	decltype(value) avg = sum/v.size();
	decltype(value) mdn = {};

	std::sort(v.begin(), v.end());
	mdn = median(v);

	std::cout
		<< "\n---TOTALS: "
		<< " sum: " << sum
		<< " avg: " << avg
		<< " median: " << mdn
		<< "\n";
}

