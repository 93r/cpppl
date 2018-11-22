#include <iostream>
#include <string>

void show_array(std::string arr[], std::size_t sz)
{
	for (std::size_t i = 0; i < sz; ++i) {
		std::cout << arr[i] << "\n";
	}
}

int main()
{
	std::string months[] = {
		"jan", "feb", "mar", "apr", "mai", "jun",
		"jul", "aug", "sep", "oct", "nov", "dez"
	};
	const std::size_t months_sz = sizeof(months)/sizeof(months[0]);

	for (std::size_t i = 0; i < months_sz; ++i) {
		std::cout << months[i] << "\n";
	}
	
	std::cout << "\n---\n";
	show_array(months, months_sz);
}

