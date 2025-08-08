#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");
    std::cout << "Введите число:\n";
    double value = 0;
    std::cin >> value;
    std::cout << "Ваше число:\n" << value;
}