#include <iostream>

void swap(int& a, int& b) {
	if (a == b) { return; }
	a ^= b;
	b ^= a;
	a ^= b;
}

int main(int argc, char** argv)
{
	int a = 5, b = 8;

	std::cout << "a = " << a << ", b = " << b << '\n';

	swap(a, b);

	std::cout << "a = " << a << ", b = " << b;

	return 0;
}