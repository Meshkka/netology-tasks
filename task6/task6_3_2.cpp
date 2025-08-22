#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");

    int value = 0;
    unsigned long long int result = 0, prevResult = 0;

    std::cout << "Введите число: ";
    std::cin >> value;
    std::cout << "Числа Фибоначчи:";

    for (int i = 0; i < value; i++) {
        if (i == 0) { result = 0; }
        else if (i == 1) { result = 1, prevResult = 0; }
        else {
            unsigned long long int temp = result;
            result += prevResult;
            prevResult = temp;
        }
        std::cout << ' ' << result;
    }
}