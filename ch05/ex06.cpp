#include <iostream>

void f(char c) {}
void g(char& cr) {}
void h(const char& ccr) {}

struct test {
	int i_, j_;
	test(int i, int j) : i_(i), j_(j)
	{
		std::cout << "test ctor i_: " << i_ << " j_: " << j_ << "\n";
	}
	test(const test& other) : i_(other.i_+1), j_(other.j_+1)
	{
		std::cout << "test copyctor i_: " << i_ << " j_: " << j_ << "\n";
	}
};
void j(const test& ct) {}

int main()
{
	char c = 'b';
	signed char sc = 'c';
	unsigned char uc = 'd';

	//f('a');
	//f(49);
	//f(3300);
	//f(c);
	//f(sc);
	//f(uc);

	//g('a');
	//g(49);
	//g(3300);
	g(c);
	//g(sc);
	//g(uc);

	//h('a');
	//h(49);
	//h(3300);
	h(c);
	h(sc);
	h(uc);

	test tt {1, 1};
	j(tt);
	j({2, 2});
}

