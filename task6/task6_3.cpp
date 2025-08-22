#include <iostream>

int fib(int value) {
    if (value == 0) { return 0; }
    else if (value == 1) { return 1; }
    else { return fib(value - 1) + fib(value - 2); }
}

int main()
{
    setlocale(LC_ALL, "RU");

    int value;

    std::cout << "Введите число: ";
    std::cin >> value;
    std::cout << "Числа Фибоначчи:";

    for (int i = 0; i < value; i++) {
        std::cout << ' ' << fib(i);
    }
}
