#include <iostream>
#include <string>
#include <iomanip>

int main()
{
	setlocale(LC_ALL, "RU");

	std::string s3 = "   ";
	std::string s4 = "\t";

	std::cout << "Оператор: ||\n";
	std::cout << std::boolalpha << ((0 == 1) || (1 != 12)) << s4 << (true || (15 != 15)) << s4 << (true || true) << '\n';
	std::cout << std::boolalpha << (false || false) << s3 << (true || true) << s4 << (true || true) << '\n';
	std::cout << std::boolalpha << (true || true) << s4 << (false || false) << s3 << (true || true) << '\n';
	std::cout << std::boolalpha << (false || false) << s3 << (false || false) << s3 << (false || false) << "\n\n";

	std::cout << "Оператор: &&\n";
	std::cout << std::boolalpha << (false && true) << s3 << (false && true) << s3 << (false && true) << '\n';
	std::cout << std::boolalpha << (false && true) << s3 << (true && true) << s4 << (false && true) << '\n';
	std::cout << std::boolalpha << (true && true) << s4 << (false && true) << s3 << (false && true) << '\n';
	std::cout << std::boolalpha << (true && true) << s4 << (true && true) << s4 << (true && true);
}