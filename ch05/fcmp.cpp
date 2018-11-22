#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

int main(int argc, char* argv[])
{
	std::vector<std::string> args(argv+1, argv+argc);
	if (args.size() != 2) {
		std::cerr << "Usage: fcmp file1 file2\n";
		return 1;
	}

	std::ifstream file1 (args[0]);
	std::ifstream file2 (args[1]);
	std::ostringstream oss1, oss2;

	oss1 << file1.rdbuf();
	oss2 << file2.rdbuf();

	if (oss1.str() == oss2.str())
		std::cout << "content of files is the same\n";
	else
		std::cout << "Not the same!!!\n";
}

