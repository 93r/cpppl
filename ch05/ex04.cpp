#include <iostream>

void swap_int_p(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void swap_int_r(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	int w = 1, x = 2, y = 3, z = 4;

	std::cout << "before swap_int_p: " << "w: " << w << "\tx: " << x << "\n";
	swap_int_p(&w, &x);
	std::cout << "after swap_int_p: " << "w: " << w << "\tx: " << x << "\n";

	std::cout << "before swap_int_r: " << "y: " << y << "\tz: " << z << "\n";
	swap_int_r(y, z);
	std::cout << "after swap_int_r: " << "y: " << y << "\tz: " << z << "\n";
}
