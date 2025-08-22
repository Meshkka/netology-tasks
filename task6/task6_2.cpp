#include <iostream>

void exp(int value, int power, int result = 1) {
    for (int i = 0; i < power; i++) {
        result *= value;
    }

    std::cout << value << " в степени " << power << " = " << result << '\n';
}

int main()
{
    setlocale(LC_ALL, "RU");

    exp(5, 2);
    exp(3, 3);
    exp(4, 4);
}