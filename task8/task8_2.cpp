﻿#include <iostream>

namespace addition 
{
    int calc(int x, int y) {
        return x + y;
    }
}

namespace subtraction
{
    int calc(int x, int y) {
        return x - y;
    }
}

namespace multiplication
{
    int calc(int x, int y) {
        return x * y;
    }
}

namespace division
{
    int calc(int x, int y) {
        return x / y;
    }
}

int main()
{
    setlocale(LC_ALL, "RU");

    int x = 6, y = 9;

    std::cout << "Сложение: " << addition::calc(x, y) << '\n';
    std::cout << "Вычитание: " << subtraction::calc(x, y) << '\n';
    std::cout << "Умножение: " << multiplication::calc(x, y) << '\n';
    std::cout << "Деление: " << division::calc(x, y);
}