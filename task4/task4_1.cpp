#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");

    int value = 1;
    int sum = 0;

    while (value != 0) {
        std::cout << "Введите целое число или число '0', чтобы закончить:\n";
        std::cin >> value;
        sum += value;
    }
    
    std::cout << "Сумма: " << sum;
}