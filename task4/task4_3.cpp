#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");

    int value = 0;
    std::cout << "Введите целое число:\n";
    std::cin >> value;

    for (int i = 1; i < 11; i++) {
        std::cout << value << " x " << i << " = " << value * i;
        if (i != 10) { std::cout << '\n'; }
    }
}