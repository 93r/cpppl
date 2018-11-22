// includes handling of excersize 14
#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <numeric>
#include <algorithm>

int main()
{
	std::ifstream in {"ex03.dat"};
	std::string name;
	double value;
	std::map<std::string, std::vector<decltype(value)>> m;

	while (in >> name >> value) {
		//std::cout << name << " -> " << value << "\n";
		m[name].push_back(value);
	}

	std::vector<double> totals;
	for (auto& [k, v] : m) {
		double sum = std::accumulate(v.begin(), v.end(), 0.0);
		double avg = sum/v.size();
		double median = 0.0;

		std::sort(v.begin(), v.end());
		if (v.size() % 2 == 0) {
			median = (
					*( v.begin() + v.size()/2 )
					+ *( v.begin() + v.size()/2 - 1)
				 )/2;
		}
		else {
			median = *( v.begin() + v.size()/2 );
		}

		totals.insert(totals.end(), v.begin(), v.end());

		std::cout
			<< k
			<< " sum: " << sum
			<< " avg: " << avg
			<< " median: " << median
			<< "\n";
	}

	auto& v = totals;
	double sum = std::accumulate(v.begin(), v.end(), 0.0);
	double avg = sum/v.size();
	double median = 0.0;

	std::sort(v.begin(), v.end());
	if (v.size() % 2 == 0) {
		median = (
				*( v.begin() + v.size()/2 )
				+ *( v.begin() + v.size()/2 - 1)
			 )/2;
	}
	else {
		median = *( v.begin() + v.size()/2 );
	}

	std::cout
		<< "\n---TOTALS: "
		<< " sum: " << sum
		<< " avg: " << avg
		<< " median: " << median
		<< "\n";
}

