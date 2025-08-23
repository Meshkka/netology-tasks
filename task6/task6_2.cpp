#include <iostream>

int exp(int value, int power, int result = 1) {
    for (int i = 0; i < power; i++) {
        result *= value;
    }

    return result;
}

int main()
{
    setlocale(LC_ALL, "RU");

    std::cout << 5 << " в степени " << 2 << " = " << exp(5, 2) << '\n';
    std::cout << 3 << " в степени " << 3 << " = " << exp(3, 3) << '\n';
    std::cout << 4 << " в степени " << 4 << " = " << exp(4, 4);
}
